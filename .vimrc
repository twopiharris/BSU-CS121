" a few of my fovorite changes for programming

set background=dark
set number
set autoindent
set tabstop=2 
set expandtab
colorscheme slate

" quick compiling and running
"c
command Cc !gcc -g % -o %<
command Rc !./%<

"c++ o is objects, l is linking
command Ccp !g++ -g % -o %<
command Rcp !./%<
command Cco !g++ -g -c %
command Ccl !g++ -g *.o

"java
command Cj !javac -g %
command Rj !java %<

"debug 
command Dc !gdb %<
command Dj !jdb %<

"make
command M !make
command Mr !make run
command Mc !make clean
command Md !make debug

