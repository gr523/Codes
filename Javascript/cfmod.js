(function(){
    var txt,cururl=location.href;
    window.addEventListener('load',function(){
        if(cururl.split('problem').length>1) {
            document.querySelector('.problem-statement').style.fontSize="1.8em";
            txt=cururl.split('/');
            txt=txt[txt.length-1];
            GM_setValue('pid',txt);
            window.scroll(0,172);
            document.addEventListener('keydown', function (event) {
                var tp=cururl.split('contest/');
                if (event.key === 's') {
                    if(tp.length>1){
                        tp=tp[1].split('/');
                        tp=tp[0];
                        window.open(`/contest/${tp}/submit`);
                    } else {
                        window.open("/problemset/submit");
                    }
                }
            });
        } else if(cururl.split('submit').length>1){
            document.addEventListener('keydown', function (event) {
                if (event.key === 's') {
                    document.querySelector('input[value="Submit"]').click();
                }
            });

            var tmp=GM_getValue('pid','A');
            document.querySelector('select[name="submittedProblemIndex"]').value=tmp;
            window.scroll(0,172);

        }
    });
})();