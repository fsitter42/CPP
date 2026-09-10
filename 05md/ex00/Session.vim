let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/CPP/05md/ex00
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
argglobal
%argdel
$argadd ~/CPP/05md/ex00
set stal=2
tabnew
tabnew
tabnew
tabrewind
edit ~/CPP/05md/ex00
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 19) / 38)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/CPP/05md/ex00
tabnext
edit ~/CPP/05md/ex00/Bureaucrat.cpp
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 19) / 38)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
lcd ~/CPP/05md/ex00
tabnext
edit ~/CPP/05md/ex00/Makefile
argglobal
balt ~/CPP/05md/ex00/Bureaucrat.cpp
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 8 - ((7 * winheight(0) + 19) / 38)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 8
normal! 024|
tabnext
edit ~/CPP/05md/ex00/Bureaucrat.hpp
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 77 + 86) / 173)
exe '2resize ' . ((&lines * 18 + 20) / 40)
exe 'vert 2resize ' . ((&columns * 95 + 86) / 173)
exe '3resize ' . ((&lines * 18 + 20) / 40)
exe 'vert 3resize ' . ((&columns * 95 + 86) / 173)
argglobal
balt ~/CPP/05md/ex00/Bureaucrat.cpp
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 30 - ((19 * winheight(0) + 18) / 37)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 30
normal! 09|
wincmd w
argglobal
if bufexists("~/CPP/05md/ex00/Bureaucrat.cpp") | buffer ~/CPP/05md/ex00/Bureaucrat.cpp | else | edit ~/CPP/05md/ex00/Bureaucrat.cpp | endif
balt ~/CPP/05md/ex00/main.cpp
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 54 - ((6 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 54
normal! 014|
wincmd w
argglobal
if bufexists("~/CPP/05md/ex00/main.cpp") | buffer ~/CPP/05md/ex00/main.cpp | else | edit ~/CPP/05md/ex00/main.cpp | endif
balt ~/CPP/05md/ex00/Bureaucrat.cpp
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 31 - ((10 * winheight(0) + 9) / 18)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 31
normal! 013|
wincmd w
3wincmd w
exe 'vert 1resize ' . ((&columns * 77 + 86) / 173)
exe '2resize ' . ((&lines * 18 + 20) / 40)
exe 'vert 2resize ' . ((&columns * 95 + 86) / 173)
exe '3resize ' . ((&lines * 18 + 20) / 40)
exe 'vert 3resize ' . ((&columns * 95 + 86) / 173)
tabnext 4
set stal=1
badd +0 ~/CPP/05md/ex00
badd +1 ~/CPP/05md/ex00/Bureaucrat.cpp
badd +1 ~/CPP/05md/ex00/Makefile
badd +1 ~/CPP/05md/ex00/Bureaucrat.hpp
badd +31 ~/CPP/05md/ex00/main.cpp
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20 shortmess=filnxtToOS
let &winminheight = s:save_winminheight
let &winminwidth = s:save_winminwidth
let s:sx = expand("<sfile>:p:r")."x.vim"
if filereadable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &g:so = s:so_save | let &g:siso = s:siso_save
nohlsearch
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
