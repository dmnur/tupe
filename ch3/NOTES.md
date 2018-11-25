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


# Matching *almost* all files

```
$ echo *
$ echo .*
```

The first matches filenames *not* beginning with a period.
The second matches filenames beginning with a period, including `.` and `..`.

How to match *almost* all filenames (i.e. without `.` and `..`)?

The first thing that comes to mind:
```
$ echo .[!.]* *
```

Well, there's a problem: it won't match filenames like `..foo`.
Unfortunately, the shell's pattern matching facilities don't provide a way
to match this but not that. You have to use external tools.
This will do exactly what we need:
```
$ ls -a | grep -Fxv -e . -e .. | xargs echo
```

And, of course, some `ls` implementations already provide an option for this.
E.g. GNU `ls` has the `-A` option.
