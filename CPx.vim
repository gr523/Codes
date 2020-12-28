fu! Ftog()
    if winwidth(0) > 76
        vert res 76 | hi VertSplit guifg=#444444
    else
        vert res 200 | hi VertSplit guifg=bg
    endif
endfu
hi VertSplit guifg=bg

map <silent> <A-\> :call Ftog()<CR>

autocmd * call CocAction('toggleService', 'clangd')
