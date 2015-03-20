# GDB Video Tutorial

Author
------
Selik Samai

If you have any recommendations or feedback, please direct them to

Anton @ https://github.com/antonvinod/GDB_videos/issues/new

What is GDB
====
Well, GDB is just software you can use to debug your code.
You can use GDB on a number of different languages. 

How do I get GDB
===
Well, GDB is open source software.
It's actually the official GNU project debugger.
You can find out more at https://www.gnu.org/software/gdb/

Commands used in Tutorial:
===
there are quite a bit of commands supported by GDB;
 however, we'll use only a select few in the tutorial.
These are all the commands we'll look at in the tutorial.
Keep in mind though, there are a lot more.

| Commands(Alias)| Example | Description |
|-----------|--------------|----------------------------|
| `run(r)`  | `(gdb) r`    | runs gdb on the given file |
| `list(l)` | `(gdb) l`    | lists 10 lines by default  |
| `list(l)` | `(gdb) l 20` | lists lines centered around #,where # is a line number |
| `list(l)` | `(gdb) l f(x)`| lists lines centered around function f(x)|
| `print(p)`| `(gdb) p i ` | print a variable, where i is the variable|
GDB Introduction
----------------
In this introduction video, we'll go over setting up GDB, as well as using some very

<a href="https://www.youtube.com/watch?v=ufHO5rV3E24" target="_blank"><img src="https://i.ytimg.com/vi/ufHO5rV3E24/1.jpg?time=1426804289907" 
alt="GDB_Intro" width="480" height="280" border="10" /></a>

In this video, we'll go over `run(r)`, `list(l)` and `quit(q)` as well as setting

up GDB.

basic GDB commands.



`run (r)`

`list (l)`

`quit (q)`



GDB with Breakpoints
--------------------

GDB with Segfaults
------------------

GDB with Backtrace and Watch
----------------------------

GDB on Processes
----------------
