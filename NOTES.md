# ed

The book says that `ed` is available in any Unix, but that's not true anymore.
There are some Linux distros that don't include it by default (e.g. Debian).

But you almost always have `ex` as part of `vi`. `ex` is the extended `ed`.
Every Appendix 1 exercise can be done with it, editor commands are the same.


# Tea is ready

```
$ (sleep 300; echo Tea is ready) &  # Tea will be ready in 5 minutes
```

That's nice, but I guess that most people nowadays would want to get
a *real* notification in their desktop environment:
```
$ (sleep 300; notify-send "Tea is ready") &
```

`notify-send` is part of `libnotify`.


# Terminal's bell

We don't have hardware terminals these days, and our terminal emulators
don't have a bell to ring.

Some terminal emulators play a sound when echoing `\a`, but most just
ignore it.

You can test your terminal's reaction by typing this command:
```
$ printf \\a
```


# Shell: I/O redirection

```
$ echo Hello >junk
$ >junk echo Hello
```

Few folks know that you don't have to put the redirection operator at the end
of the command.

Use this knowledge at your job interview. ;)


# Stuff I haven't noticed before

Turns out that `tee` was there starting from at least Research Unix v7.
