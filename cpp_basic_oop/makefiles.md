<h1>Makefiles</h1>

<h2>Introduction</h2>
 
For this course we will be using Makefiles for the purpose of compiling
programs will multiple files and class dependencies. You can simply break down
this process into two parts, compiling your .cpp files into object files and
then linking your object files into an executable which runs your program,
let's see how we get there.

A Makefile is typically made of multiple entries which can be essentially
broken up into three separate sections: Targets, Dependencies and Commands.
Before we get into the syntax and structure of makefiles lets first clearly
understand targets and dependencies. The target is going to be the file you aim
to create and the dependencies are the other files that the target is dependent
on to run. Our targets are going to be one of the two types of files we are
aiming to create, Executable and Object files. Object files are made from
compiling .cpp files and Executable files are made from linking Object files.

<h2>Make Basics</h2>

The general structure of a make file is a series of chunks that follow this pattern:

    {Target}:  {Dependencies} 
    {Tab} {Command} 

<p>
{target} is the name of the target you are trying to build. You can name it
whatever you like, but generally you'll name most targets after the file 
that target will build.
<p>

<p>
The target must be followed by a colon(:) character.
<p>

<p>
{Dependencies} is a list of files or targets that must be in place before
this target can be built. Normally the dependencies will either be files or other
targets defined somewhere else in the make file. 
</p>

<p>
The line immediately underneath the target must begin with a tab (Spaces will not work,
and this has caused a surprising amount of angst over the years.)
<p>

<p>
Following the tab, you can write ANY legitimate commands for your operating system.
Typically, though, this is the command you need to create the target.
You can have multiple command lines for a target, but each needs to begin with a tab.
</p>

<p>
So imagine the simplest case where you have a main.cpp with no other dependencies.
You can write a make file for this program that looks like this:
</p>

<pre>
myProg: main.cpp
	g++ main.cpp -o myProg
</pre>

<p>
Here, myProg is the target name.  It requires main.cpp, and when it is activated,
it runs the g++ compiler and renames the output myProg. If you call this file 
"makefile" and put it in the same directory as main.cpp, you can type "make"
and your program will automatically compile.  If you simply type make, the 
make utility will try to create the topmost target (which in this case is the
only one we have.)
<p>

<h2>Make with multi-file projects</h2>

<p>
Makefiles are great with simple programs, but they really come into their own
when you want to build a more complex program that involves a lot of different
files.
</p>


<p>
So imagine you are building some kind of "Critter Racer" game. You have a Critter
class, which will be the driver.  Classes in C++ usually are housed in a .cpp file
and a .h file.  You might also have a "Car" class, which will hold the vehicle the
critter will drive.  This class will have its own cpp and h files.
</p>

<p>
But since the car's driver is a Critter, the car will not make sense without knowing
at least the structure of the critter, and if the critter's definition changes, 
the car class will need to be recompiled.
<p>

<p>
Likely you'll also have a main class to tie the whole thing together, but this will
only make sense to compile if everything else is already up to date.
Here's all the files we have so far:
</p>

<pre>
main.cpp
car.cpp
car.h
critter.cpp
critter.h
</pre>

<p>
I put those files in a rough order.  You need critter.h to compile critter.cpp, and you 
need at least a definition of the critter before you can compile the car.cpp. Of course car.cpp
also needs car.h, and main.cpp won't compile until everything else is working.
</p>

<p>
Make files are there to help you tame this complexity.  They allow you to build
your program step by step, creating {targets} along the way. Your make file tells
the system how to build each target, and eventually how to build the entire application
from the various targets.
</p>

<p>
It might be easiest to think of this from the top down.  Recall that when you have 
a multi-file project, you can compile intermediate object code (that is code without
a main function) and then you can link these object files together at the end to 
build a final project.  So if we begin at the main target, this is what we'll 
probably need:
<p>

<pre>
game: main.o car.o critter.o
	g++ main.o car.o critter.o -o game
</pre>

<p>
What I'm saying here is "I want to build the critterRace target. In order to do this,
I need working object files for main.o, car.o, and critter.o  If those are in place
use g++ to link these files together and call the output critterRace."
</p>

<p>
Of course, this implies that we have the ability to create all these object files.
The complete first pass of the makefile might look like this:
</p>

<pre>
game: main.o car.o critter.o
	g++ main.o car.o critter.o -o game

main.o: main.cpp car.h critter.h
	g++ -c main.cpp

car.o: car.cpp car.h critter.h
	g++ -c car.cpp

critter.o: critter.cpp critter.h
	g++ -c critter.cpp

</pre>


<p>
The targets all make sense when you think about them.  To build main.o, you need main.cpp
and the header files for the car and the critter (you can compile an object with only the 
headers, so you can specify .h rather than .o here.)
</p>

<p>
Remember that the -c compiler directive creates an object file with the same name as the 
original cpp file.  That's why each of the .o targets uses the -c directive. Note that 
apart from the first target (which should usually be the final build) the order of targets
is not critical. Still, it's helpful to go from more general to more specific.
</p>

<p>
If you save this file as "makefile" and run make, the make utility will try to build the
first target (critterRace.) If this is the first pass, none of the object files will exist,
so make will automatically go to any missing targets, check their dependencies, and run them.
In this way, make will compile only those elements that have changed since the last 
successful compile, but will ultimately ensure your entire project is compiled.
</p>

<h2>Adding Utility targets</h2>

<p>
It's common to also add utility targets to the bottom of your make file.  These targets allow
you to run various os commands through the make utility.  Here is the completed critterRace with
two new utility targets added:
</p>

<pre>
game: main.o car.o critter.o
	g++ main.o car.o critter.o -o game

main.o: main.cpp car.h critter.h
	g++ -c main.cpp

car.o: car.cpp car.h critter.h
	g++ -c car.cpp

critter.o: critter.cpp critter.h
	g++ -c critter.cpp

clean: 
	rm *.o
	rm game

run:	game
	./game

</pre>

<p>
The clean target is special. It isn't really about building anything. Instead, it's a utility for 
cleaning things up.  Imagine you've written a program and it compiles, but then you find a mistake.
When you fix the mistake, it's possible that the old incorrect executable file is sitting on your 
directory, and you could think you're looking a a new version when you're actually looking at the old
version. It would be nice to have the ability to quickly clean out the older versions of things to 
guarantee you have a fresh compile. That's what the clean target does.  It removes all the .o files
as well as the final executable.  To run it, just type "make clean" from the command line. 
</p>

<p>
It's interesting that clean doesn't have any dependencies.  That's because you can run it any time. 
It doesn't really matter what you've built before, because you want to delete all of the compiled 
code.  Be careful not to delete<strong> all</strong> files with a clean command, because that would destroy your 
source code, too!
</p>

<p>
The run target is optional, but very nice.  It allows a user to quickly run a program with "make run"
It's very handy when debugging your code, because you can use the same tool (make) to both compile
and run your code.  In our class, we'll expect you to include a run target in your make files so the
grader can easily run your code without having to figure out which file is executable.
</p>

<p>
The run target has game (the final version of the program) set as its dependency.  That way, if
the user tries to run the program and it isn't up to date, the make utility will recompile any 
necessary components.  
</p>

<p>
Sometimes you'll also see an install target.  This normally compiles the final version of the code 
while also doing other housekeeping like checking for external dependancies, creating a file structure,
and maybe even moving files around so they are available to the entire operating system.
</p>

<p>
You may have been impressed by unix users telling you they compile all their applications by hand,
but in reality this often simply means they run
</p>

<pre>
sudo make install
</pre>

<p>
Sudo gives a temporary form of root-like access to subsequent commands.
</p>


<h2>Fun with macros</h2>

<p>
You can also use macros in your makefile. The most common macros (by tradition) are
</p>
<pre>
CC=g++
</pre>

<p>
and 
</p>

<pre>
CFLAGS=-g -Wall
</pre>

<p>
(-g means include debugging information and -Wall means include all warnings)
</p>

<p>
You can then use the $() syntax to incorporate the compiler and flags into your operations, so 
<p>
<pre>
g++ -c foo.cpp
</pre>

<p>
becomes
</p>

<pre>
$(CC) $(CFLAGS) -c foo.cpp
</pre>

<p>
The nice thing about this is it's very easy to change the way the compiler
behaves.  The "-g -Wall" stuff is great for debugging, but when you're ready to
finalize your program, just change the CFLAGS to nothing, and you'll get a more
streamlined compilation.
</p>

<p>
A complete version of the critter game makefile might look like this:
</p>

<pre>

#makefile for game

#standard g++ compiler
CC = g++

#for now, always compile with debugging information
#set CFLAGS to empty for final compilation

CFLAGS = -g -Wall

game: main.o car.o critter.o
	$(CC) $(CFLAGS) main.o car.o horse.o -o game 

main.o: main.cpp car.h critter.h
	$(CC) $(CFLAGS) -c main.cpp

car.o: car.cpp car.h critter.h
	$(CC) $(CFLAGS) -c car.cpp

clean: 
	rm *.o
	rm game

run:	game
	./game

</pre>

<p>
There's MUCH more you can do with makefiles, but this is good enough for the first pass.
</p>

<h2>Notable Makefile Facts:</h2>

<p>
When using the command make, if you just type make it will start executing the
first target specified in the Makefile. If you type make followed by a target
name it will begin at that target. "make Critter" will take
you to the executable target.
</p>

<p>
If you do not specify the dependencies the makefile will try to guess which
files it needs by looking in the directory for files that match the targets
name. So in the example, "car.o: car.cpp" and I do not put
car.h as a dependency it will look in the directory and include it for you. As
a rule of thumb, do we ever want to rely on computers for anything? Especially
if we have no idea how it works? Please write all of the dependencies and do
not rely on the makefile to do it for you.
</p>

<p>
Using the # symbol allows you to write comments inside your makefile.
</p>

<p>
Makefiles do not have a file extension, they are just a file. If you create the
Makefile on Pegasus/Tesla it will know what you mean and not add that
extension. If you try to create it outside you may have to remove it manually.
I suggest turning off hidden file extensions, this way simply deleting it from
the end of your filename will change it.
</p>

<p>
There are a number of tools like cmake and tools that come with C++ IDEs that will
automatically create make files for you.  While this is a really wonderful thing, 
you should always be skeptical of any tool that does your job for you.  For this 
class, you will be expected to build all make files by hand.  Once you understand
how they work a little better, feel free to investigate these tools.
</p>

<p>
While all these examples use C++ and many C++ programs use make, you can really
use make for any kind of compilation.  We'll even use make files for Java, as
the problems that make solves are every bit as applicable in Java.
</p>
