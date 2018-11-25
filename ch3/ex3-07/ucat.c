#define _POSIX_C_SOURCE 200809L

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int fd, ret;
	char c;

	if (argc > 1) {
		while (*(++argv)) {
			fd = open(*argv, O_RDONLY);
			if (fd == -1) {
				perror(*argv);
				return 1;
			}
			for (;;) {
				ret = read(fd, &c, 1);
				if (ret == 0)
					break;
				else if (ret == -1) {
					perror(*argv);
					return 1;
				}
				write(1, &c, 1);
			}
			close(fd);
		}
	} else {
		for (;;) {
			ret = read(0, &c, 1);
			if (ret == 0)
				break;
			write(1, &c, 1);
		}
	}
	return 0;
}
