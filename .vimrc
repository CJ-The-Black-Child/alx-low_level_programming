"/* ===========================================================================
" My .vimrc file
"==============================================================================

" Sets numbers to the beginning of every line.
" Display the current line and column in Vim
set nu

" Change the default color scheme
colorscheme slate

" Maps the buffer for files such that you can easily navigate between files
" that were previously opened
map <F2> :bprev<CR>
map <F3> :bnext<CR>

" A quick way to auto source my .vimrc file with ease
map <F5> :source ~/.vimrc<CR>

" Auto indents my .vimrc file
set autoindent

" Intelligent indentation for C code
set cindent

" Enable syntax highlighting in Vim
syntax enable

" Auto fixes trailing whitespaces once you save your file
autocmd BufWritePre * %s/\s\+$//e

"/* ===========================================================================
"	End of my .vimrc file
" =============================================================================
