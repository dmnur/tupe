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


# Stuff I haven't noticed before

Turns out that `tee` was there starting from at least Research Unix v7.
