fu! Ftog()
    if winwidth(0) > 76
        vert res 76 | hi VertSplit guifg=#444444
    else
        vert res 200 | hi VertSplit guifg=bg
    endif
endfu
hi VertSplit guifg=bg

map <silent> <A-\> :call Ftog()<CR>

" fu! RunAfter()
"     call CocAction('toggleService', 'clangd')
" endfu
" 
" autocmd VimEnter * call timer_start(1000, { tid -> execute("call RunAfter()")})

fu! EnableClangd()
    :! [ -d settings ] && mv settings .vim
    :CocRestart
endfu

autocmd ExitPre * ![ -d .vim ] && mv .vim settings

map <silent><F8> :call EnableClangd()<CR> 
