# ed

The book says that `ed` is available in any Unix, but that's not true anymore.
There are some Linux distros that don't include it by default (e.g. Debian).

But you almost always have `ex` as part of `vi`. `ex` is the extended `ed`.
Every Appendix 1 exercise can be done with it, editor commands are the same.


# Stuff I haven't noticed before

## `tee` is not new

Turns out that `tee` was there since at least Research Unix v7.

## `.` uses PATH

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

## `foo=bar cmd` is not new

The syntax `foo=bar cmd` was available in v7's `sh`. Also, originally these
assignments could be anywhere in the command line, "but this interfered
with `dd(1)`." Another funny thing is that when you set `$PATH` this way
it is used immediately, so you can e.g. do this:
```
$ PATH=/usr/games fortune
```

## Backslash in here-documents

The word in here-document constructions can be escaped not only by quoting it,
but also with a backslash:
```
$ cat <<\EOF
> `foo bar`
> EOF
`foo bar`
```
