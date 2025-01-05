# Basic Unix commands

## pwd
 * present working directory
 * "Where am i?"
 * will start with /, directories separated by /
 * note that DOS used \\, not the same

## ls
 * list
 * "What's here?"
 * shows all the files and directories in current directory
 * may be color-coded
 * you can filter: ls \*.py 
 * ls -l long listing, showing other details
 * ls -al also show hidden files

## cd
 * change directory
 * cd .. goes up one directory
 * cd otherDir goes down if otherDir is a directory here
 * You can do complex paths if you want
 * cd ../../public_html

## mkdir 
 * make a directory
 * mkdir newDir

## rm 
 * remove a file or directory
 * rm bad.txt
 * this is permanent - be careful about it

## mv
 * moves or renames a file
 * mv bad.txt good.txt (rename bad.txt to good.text)
 * mv good.txt .. (move good.txt to parent directory)

## cp
 * copies a file 
 * cp first.txt second.txt
 * cp first.txt ..

## clear
 * clears the screen
 * sometimes useful when the screen gets messy

## chmod
 * change permissions of a file
```   
    owner  group  world
    rwx    rwx    rwx
```
 * chmod 644 myfile
 * owner can read and write, everyone else can only read
 * chmod 755 myfile
 * owner can do anything, everyone else can run and read

## pico / nano
 * pico myfile.txt
 * opens up pico editor to exit myfile.txt
 * very simplistic editor
 * commands are listed at bottom of screen
 * all commands use the control key
 * very easy to use
 * not very powerful

## vim
 * much more powerful editor
 * anachronistic - very unusual control system
 * three primary modes
   * *command* - every key is a command
   * *insert* - type stuff in like normal
   * *instructions* - global commands
 * lots of other modes too, but these are most important
 * you can link commands together to do very powerful things
 * you don't need to know how it all works.

## key vim commands
 * i - go to insert mode
 * esc - go to command mode
 * w - forward one word
 * b - back one word
 * x - delete current character
 * u - undo last command
 * . - repeat last command
 * gg - go to beginning of document
 * G - go to end of document
 * 0 - go to beginning of line
 * ^ - go to first character of line
 * $ - go to end of line  
 * d - delete something 
 * P (shift-p) paste

## combining commands
 * dw - delete the next word
 * 3x delete three characters
 * 3dw delete next three words
 * 3b go back three words
 * dd delete current line
 * 3dd delete three lines

## instructions mode
 * used for global commands
 * usually things that operate on entire document
 * go to command line (esc)
 * type a colon (:)
 * new command line opens in bottom of screen
 * you can simply type in commands
 * they can also be abbreviated
 * :write - writes the current file
 * :write filename.txt - writes to the given file name
 * :quit - exits the editor
 * :quit! - exits the editor ignoring changes
 * :wq - shortcut for :wq

## other useful instructions
 * :set number - turns on line numbers
 * :5 - go directly to line 5
 * :set autoindent - turns on autoindent
 * :set expandtab - converts tabs to spaces - very useful in python
 * :set tabstop=4 - sets tabs to four spaces long
 * :!ls - does an ls or any other unix command in the current directory
 * :/foo - finds foo in the current file


