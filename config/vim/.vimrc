source ~vi/ligne
set modeline modelines=50
map v :!echo @(#) [MB] b_.exrc Version 1.13 du 06/02/26 - MODIFIE
map v 0C#	% Z%	[% Y%] % M%	Version % I% du % E% - % Q%
se ai sm noic nows hlsearch incsearch
syntax on
se ts=5 sw=5
map = :.=^M
map g 1G
map q :rew^M
map ^X :vi#^M
abbr ts5 :se ts=5 sw=5
abbr ts8 :se ts=8 sw=8
abbr co  :colorscheme desert
colorscheme desert
se nu
se foldmethod=marker
map [1;5D h
map [1;5C l
map [1;5A k
map [1;5B j
if filereadable(".vim.custom")
	so .vim.custom
endif
