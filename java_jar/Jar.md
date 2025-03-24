## Overview
A Jar file is a Java Archive.  It is a useful way to package Java files.  Jar files can include both the source and executable class files for a Java program
integrated into a single file.  If the jar file is created correctly, it will take less disk space than the original files (because it uses a variation of the
zip compression scheme.) In addition, a jar file can be run directly from the command line, or in many operating systems, the use can simply click on the 
jar file's icon to run the program as if it were a native executable.  For these reasons, a jar file is an ideal way to deploy a Java application.

## The jar tool
Many Java IDEs include built-in support for building jar files, but (as usual) we will learn to do it by hand without relying on any software except that supplied
by the JDK.  In this way, you will be able to create jar files wherever you find yourself, and you should have no problem converting to the automated tools.

The 'jar' command line tool is included in the JKD, so if you can compile on your machine, you already have access to the jar tool.  The first parameter
of the jar tool is a secret code to explain what the other parameters will mean.  For our example, we will use 'jar cvfm':

* **c:** represents the create command, as we wish to create a new jar file. Other options include (u)pdate and e(x)tract
* **v:** indicates verbose output.  If you do not include this, you will not see the description of the process
* **f:** indicates you will be indicating a file name for the jar, and where that filename will come in the later parameters
* **m:** indicates that you will be using a custom manifest file, and where that filename wil come in the later parameters

There are other command options, but these are fine for our purposes.  You can always look at the official documentation for more details.

## The manifest file
For besty performance, we will include a manifest file to set a couple of parameters for our project. The jar utility can do this automatically, but the 
results are often not ideal.  You can call this file whatever you wish, but the tradition is to call it 'manifest.txt.'  Create and save this file in
the same directory as your program.  You should have two lines in the file.  The first line declares the classpath (which is where the class files will 
be found) and the second line indicates which executable class file should be invoked when the package is run.

Normally the classpath will be the current directory (.) and the executable will be one of your executable class files (one with a run method.) For example,
consider a program with all files in the current directory and a main class called "Main".  In that case, your manifest.txt would look like this:
```
Classpath: .
Main-Class: Main
```
Note that trailing lines have been known to cause problems in manifest.txt files, so if your jar is not working correctly, check for that.  Also, be
certain that the class file you indicate as the Main-Class has a static main method, or the program will not begin properly.

## Executing the jar command
Once you've assembled all the files and created thge manifest.txt document, you are ready to compile the jar file.  Assuming all the files you need are in
the current directory, you can use this command to indicate you are ready to compile the jar file:
```
jar cvfm myProj.jar manifest.txt *.*
```
The order of the parameters matters. the 'cvfm' flag indicates you will be listing the name of the jar file first, followed by the name of the manifest file,
followed by the name of all the other files to include (*.*, meaning all files in the directory.)

Note that in a standard application you may only include the class files and other needed resources.  For our educational purposes, you will also be 
expected to include all source (java) files as well as documentation and makefiles.  The *.* indicates you wish to include every file in the current
directory into your jar.  You can also include other files and directories at the end of the command if you wish.

## Running an executable jar
If you have a jar file compiled under any OS, you should be able to run that file on any other OS that has the JRE (The full JDK is not necessary.) If the
target computer can run Java programs, it can almost certainly run Jar files as well.  Often you can simply double-click on the jar file icon to run the 
program directly. If this does not work, you can go to the command line and type this command to run the archive:
``` 
java -jar jarFile.jar
```
of course, you'll replace 'jarFile.jar' with the actual jar file name.

## Extracting data from a jar file
If you have a jar file, but not the original files, you can peek into the jar to see which files are inside.  Use this command:
```
jar tf jarFile.jar
```
If you want to extract all the files, you can use this command:
```
jar xf jarFile.jar
```
This will extract all files and directories as archived in the jar file.  This is why we expect you to include all your source files, so we can find them
and help if something is going wrong.  Of course, you should usually also be indicating a github repo, so that should also give us the ability to look 
over your code.

**Note**
Since anyone can extract files from a jar file, the jar format is **not** meant for security, just convenience. If you need security, you may want to look
into encryption techniques.

