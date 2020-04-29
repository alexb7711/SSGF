let SessionLoad = 1
let s:so_save = &so | let s:siso_save = &siso | set so=0 siso=0
let v:this_session=expand("<sfile>:p")
silent only
cd ~/Code/SSGF/src
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
badd +1 GUI/FPSMonitor.cpp
badd +1 GUI/FPSMonitor.hpp
badd +1 Game.cpp
badd +1 Game.hpp
badd +379 ~/Code/dotfiles/nvim/.config/nvim/plugged/c.vim/c-support/templates/c.cpp.template
badd +1 ResourceHandler/ResourceHandler.cpp
badd +18 ../example/Makefile
badd +1 State/DefaultState.cpp
badd +1 State/DefaultState.hpp
badd +3 ResourceHandler/ResourceContainer.hpp
badd +1 ResourceHandler/ResourceHandler.hpp
badd +17 Utilities/Animate.cpp
badd +0 Utilities/Animate.hpp
argglobal
%argdel
set stal=2
edit GUI/FPSMonitor.hpp
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe '1resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 1resize ' . ((&columns * 76 + 95) / 190)
exe '2resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 2resize ' . ((&columns * 75 + 95) / 190)
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
let s:l = 47 - ((46 * winheight(0) + 31) / 62)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
47
normal! 09|
wincmd w
argglobal
if bufexists("GUI/FPSMonitor.cpp") | buffer GUI/FPSMonitor.cpp | else | edit GUI/FPSMonitor.cpp | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 69 - ((40 * winheight(0) + 31) / 62)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
69
normal! 0
wincmd w
exe '1resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 1resize ' . ((&columns * 76 + 95) / 190)
exe '2resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 2resize ' . ((&columns * 75 + 95) / 190)
tabedit Game.hpp
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe '1resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 1resize ' . ((&columns * 76 + 95) / 190)
exe '2resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 2resize ' . ((&columns * 75 + 95) / 190)
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
let s:l = 1 - ((0 * winheight(0) + 31) / 62)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
argglobal
if bufexists("Game.cpp") | buffer Game.cpp | else | edit Game.cpp | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 15 - ((14 * winheight(0) + 31) / 62)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
15
normal! 011|
wincmd w
exe '1resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 1resize ' . ((&columns * 76 + 95) / 190)
exe '2resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 2resize ' . ((&columns * 75 + 95) / 190)
tabedit State/DefaultState.cpp
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe '1resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 1resize ' . ((&columns * 76 + 95) / 190)
exe '2resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 2resize ' . ((&columns * 75 + 95) / 190)
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
let s:l = 75 - ((38 * winheight(0) + 31) / 62)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
75
normal! 024|
wincmd w
argglobal
if bufexists("State/DefaultState.hpp") | buffer State/DefaultState.hpp | else | edit State/DefaultState.hpp | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 23 - ((22 * winheight(0) + 31) / 62)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
23
normal! 0
wincmd w
exe '1resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 1resize ' . ((&columns * 76 + 95) / 190)
exe '2resize ' . ((&lines * 62 + 33) / 66)
exe 'vert 2resize ' . ((&columns * 75 + 95) / 190)
tabedit Utilities/Animate.cpp
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 95 + 95) / 190)
exe 'vert 2resize ' . ((&columns * 94 + 95) / 190)
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
let s:l = 44 - ((43 * winheight(0) + 31) / 63)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
44
normal! 025|
wincmd w
argglobal
if bufexists("Utilities/Animate.hpp") | buffer Utilities/Animate.hpp | else | edit Utilities/Animate.hpp | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 57 - ((41 * winheight(0) + 31) / 63)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
57
normal! 047|
wincmd w
exe 'vert 1resize ' . ((&columns * 95 + 95) / 190)
exe 'vert 2resize ' . ((&columns * 94 + 95) / 190)
tabedit ../example/Makefile
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
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
let s:l = 13 - ((12 * winheight(0) + 31) / 62)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
13
normal! 039|
tabnext 4
set stal=1
if exists('s:wipebuf') && getbufvar(s:wipebuf, '&buftype') isnot# 'terminal'
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20 winminheight=1 winminwidth=1 shortmess=filnxtToOF
let s:sx = expand("<sfile>:p:r")."x.vim"
if file_readable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &so = s:so_save | let &siso = s:siso_save
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
