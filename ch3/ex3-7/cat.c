#define _POSIX_C_SOURCE 200809L

#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	int c;

	if (argc > 1) {
		while (*(++argv)) {
			f = fopen(*argv, "r");
			if (!f) {
				perror(*argv);
				return 1;
			}
			while ((c = getc(f)) != EOF)
				putchar(c);
			fclose(f);
		}
	} else {
		while ((c = getchar()) != EOF)
			putchar(c);
	}
	return 0;
}
