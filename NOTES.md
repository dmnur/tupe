# ed

The book says that `ed` is available in any Unix, but that's not true anymore.
There are some Linux distros that don't include it by default (e.g. Debian).

But you almost always have `ex` as part of `vi`. `ex` is the extended `ed`.
Every Appendix 1 exercise can be done with it, editor commands are the same.


# Stuff I haven't noticed before

Turns out that `tee` was there starting from at least Research Unix v7.

What?! The `.` command uses `$PATH`!
```
$ pwd
/home/dmn
$ echo $PATH
/home/dmn/bin:/bin:/usr/bin
$ echo 'echo x' > bin/x
$ . x
x
# note that I didn't even run `chmod +x`
```
