
chdir(/etc/vim)
fchdir() to previous dir
sourcing "/etc/vim/vimrc"
chdir(/usr/share/vim/vim91)
fchdir() to previous dir
line 23: sourcing "/usr/share/vim/vim91/debian.vim"
finished sourcing /usr/share/vim/vim91/debian.vim
continuing in /etc/vim/vimrc
chdir(/usr/share/vim/vim91/syntax)
fchdir() to previous dir
line 34: sourcing "/usr/share/vim/vim91/syntax/syntax.vim"
chdir(/usr/share/vim/vim91/syntax)
fchdir() to previous dir
line 20: sourcing "/usr/share/vim/vim91/syntax/synload.vim"
chdir(/usr/share/vim/vim91/syntax)
fchdir() to previous dir
line 22: sourcing "/usr/share/vim/vim91/syntax/syncolor.vim"
chdir(/usr/share/vim/vim91/colors/lists)
fchdir() to previous dir
line 57: sourcing "/usr/share/vim/vim91/colors/lists/default.vim"
finished sourcing /usr/share/vim/vim91/colors/lists/default.vim
continuing in /usr/share/vim/vim91/syntax/syncolor.vim
finished sourcing /usr/share/vim/vim91/syntax/syncolor.vim
continuing in /usr/share/vim/vim91/syntax/synload.vim
finished sourcing /usr/share/vim/vim91/syntax/synload.vim
continuing in /usr/share/vim/vim91/syntax/syntax.vim
chdir(/usr/share/vim/vim91)
fchdir() to previous dir
line 26: sourcing "/usr/share/vim/vim91/filetype.vim"
not found in 'runtimepath': "ftdetect/*.vim"
finished sourcing /usr/share/vim/vim91/filetype.vim
continuing in /usr/share/vim/vim91/syntax/syntax.vim
Executing FileType Autocommands for "*"
autocommand 0verbose exe "set syntax=" . expand("<amatch>")

Executing BufRead Autocommands for "*"
autocommand if !did_filetype() && expand("<amatch>") !~ g:ft_ignore_pat | runtime! scripts.vim | endif

chdir(/usr/share/vim/vim91)
fchdir() to previous dir
line 0: sourcing "/usr/share/vim/vim91/scripts.vim"
chdir(/usr/share/vim/vim91/autoload/dist)
fchdir() to previous dir
line 27: sourcing "/usr/share/vim/vim91/autoload/dist/script.vim"
finished sourcing /usr/share/vim/vim91/autoload/dist/script.vim
continuing in /usr/share/vim/vim91/scripts.vim
finished sourcing /usr/share/vim/vim91/scripts.vim
continuing in BufRead Autocommands for "*"
Executing BufRead Autocommands for "*"
autocommand if !did_filetype() && expand("<amatch>") !~ g:ft_ignore_pat    && (expand("<amatch>") =~# '\.conf$'^I|| getline(1) =~ '^#' || getline(2) =~ '^#'^I|| getline(3) =~ '^#' || getline(4) =~ '^#'^I|| getline(5) =~ '^#') |   setf FALLBACK conf | endif

finished sourcing /usr/share/vim/vim91/syntax/syntax.vim
continuing in /etc/vim/vimrc
finished sourcing /etc/vim/vimrc
chdir(/home/codespace)
fchdir() to previous dir
could not source "$HOME/.vimrc"
chdir(/home/codespace/.vim)
fchdir() to previous dir
could not source "~/.vim/vimrc"
chdir(/home/codespace)
fchdir() to previous dir
could not source "$HOME/.exrc"
chdir(/usr/share/vim/vim91)
fchdir() to previous dir
sourcing "$VIMRUNTIME/defaults.vim"
chdir(/usr/share/vim/vim91)
fchdir() to previous dir
line 86: sourcing "/usr/share/vim/vim91/filetype.vim"
finished sourcing /usr/share/vim/vim91/filetype.vim
continuing in /usr/share/vim/vim91/defaults.vim
chdir(/usr/share/vim/vim91)
fchdir() to previous dir
line 86: sourcing "/usr/share/vim/vim91/ftplugin.vim"
finished sourcing /usr/share/vim/vim91/ftplugin.vim
continuing in /usr/share/vim/vim91/defaults.vim
chdir(/usr/share/vim/vim91)
fchdir() to previous dir
line 86: sourcing "/usr/share/vim/vim91/indent.vim"
finished sourcing /usr/share/vim/vim91/indent.vim
continuing in /usr/share/vim/vim91/defaults.vim
chdir(/usr/share/vim/vim91/syntax)
fchdir() to previous dir
line 126: sourcing "/usr/share/vim/vim91/syntax/syntax.vim"
chdir(/usr/share/vim/vim91/syntax)
fchdir() to previous dir
line 16: sourcing "/usr/share/vim/vim91/syntax/nosyntax.vim"
Executing BufEnter Autocommands for "*"
autocommand syn clear

autocommand if exists("b:current_syntax") | unlet b:current_syntax | endif

finished sourcing /usr/share/vim/vim91/syntax/nosyntax.vim
continuing in /usr/share/vim/vim91/syntax/syntax.vim
chdir(/usr/share/vim/vim91/syntax)
fchdir() to previous dir
line 20: sourcing "/usr/share/vim/vim91/syntax/synload.vim"
chdir(/usr/share/vim/vim91/syntax)
fchdir() to previous dir
line 22: sourcing "/usr/share/vim/vim91/syntax/syncolor.vim"
finished sourcing /usr/share/vim/vim91/syntax/syncolor.vim
continuing in /usr/share/vim/vim91/syntax/synload.vim
finished sourcing /usr/share/vim/vim91/syntax/synload.vim
continuing in /usr/share/vim/vim91/syntax/syntax.vim
Executing FileType Autocommands for "*"
autocommand 0verbose exe "set syntax=" . expand("<amatch>")

finished sourcing /usr/share/vim/vim91/syntax/syntax.vim
continuing in /usr/share/vim/vim91/defaults.vim
finished sourcing $VIMRUNTIME/defaults.vim
not found in 'packpath': "pack/*/start/*"
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/getscriptPlugin.vim"
finished sourcing /usr/share/vim/vim91/plugin/getscriptPlugin.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/gzip.vim"
finished sourcing /usr/share/vim/vim91/plugin/gzip.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/logiPat.vim"
finished sourcing /usr/share/vim/vim91/plugin/logiPat.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/manpager.vim"
finished sourcing /usr/share/vim/vim91/plugin/manpager.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/matchparen.vim"
finished sourcing /usr/share/vim/vim91/plugin/matchparen.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/netrwPlugin.vim"
finished sourcing /usr/share/vim/vim91/plugin/netrwPlugin.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/rrhelper.vim"
finished sourcing /usr/share/vim/vim91/plugin/rrhelper.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/spellfile.vim"
finished sourcing /usr/share/vim/vim91/plugin/spellfile.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/tarPlugin.vim"
finished sourcing /usr/share/vim/vim91/plugin/tarPlugin.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/tohtml.vim"
finished sourcing /usr/share/vim/vim91/plugin/tohtml.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/vimballPlugin.vim"
finished sourcing /usr/share/vim/vim91/plugin/vimballPlugin.vim
chdir(/usr/share/vim/vim91/plugin)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/plugin/zipPlugin.vim"
finished sourcing /usr/share/vim/vim91/plugin/zipPlugin.vim
not found in 'packpath': "pack/*/start/*"
not found in 'runtimepath': "plugin/**/*.vim"
Reading viminfo file "/home/codespace/.viminfo" info oldfiles
Executing BufWinEnter Autocommands for "*"
autocommand call s:Highlight_Matching_Pair()

Executing BufEnter Autocommands for "*"
autocommand sil call s:LocalBrowse(expand("<amatch>"))

Executing VimEnter Autocommands for "*"
autocommand sil call s:VimEnter(expand("<amatch>"))

Executing CursorMoved Autocommands for "*"
autocommand call s:Highlight_Matching_Pair()

chdir(/usr/share/vim/vim91/syntax)
fchdir() to previous dir
sourcing "/usr/share/vim/vim91/syntax/syncolor.vim"
finished sourcing /usr/share/vim/vim91/syntax/syncolor.vim

Writing viminfo file "/home/codespace/.viminfo"