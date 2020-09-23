
class newclass{
    constructor(name,starth,startm,hour,minutes,link,id,pass){
        this.name=name;
        this.minutes=minutes;
        this.hour=hour+this.minutes/60;
        this.starth=starth;
        this.startm=startm;
        this.link=link;
        this.id=id;
        this.pass=pass;
        this.messege="";
    }
    notice(messege){
        this.messege=messege;
    }
}

var cur = new Date();
var h=cur.getHours()+cur.getMinutes()/60;
class Day {
    constructor(){
        this.arr=[];
    }
    addclass(name,starth,startm,hour,minutes=0,link="",id="0",pass="0"){
        var ln=this.arr.length;
        this.arr[ln]=new newclass(name,starth,startm,hour,minutes,link,id,pass)
        return this.arr[ln];
    }
    sortclass(){
        this.arr.sort(function(a,b){
            if(a.hour>=h && b.hour>=h) 
                return a.hour-b.hour;            

            if(a.hour<h && b.hour>=h)
                return 1;

            if(a.hour>=h && b.hour<h)
                return -1;

            if(a.hour<b.hour)
                return -1;

            return 1;            
        })
    }
}


var today=new Day();


function AddclasstoDay(id){
    if(id==1) Monday();
    if(id==3) Wednesday();
}
AddclasstoDay(cur.getDay());
today.sortclass();

var text="";

async function copytoclipboard(text) {
  await navigator.clipboard.writeText(text);
}

function showClass(curclass){
    var curTextcolor="red";
    var sm=curclass.startm;
    var em=curclass.minutes;
    var meeting="";
    var messege="";
    var ss="am",es="pm";
    var sh=curclass.starth,eh=Math.floor(curclass.hour);
    if(sh>=12) ss="pm";
    if(eh<=12) es="am";
    if(sh!=12) sh%=12;
    if(eh!=12) eh%=12;
    var id=curclass.id;

    if(id!="0"){
        meeting=`Meeting ID : ${id} &nbsp
        <button onclick="copytoclipboard('${id}');">copy</button><br>
        Password &nbsp &nbsp: ${curclass.pass} &nbsp
        <button onclick="copytoclipboard('${curclass.pass}');">copy</button><br>
        `
    }
    if(curclass.messege!=""){
        messege=`${curclass.messege}`;
    }
    if(sm<10) sm+="0";
    if(em<10) em+="0";
    if(curclass.hour<h) curTextcolor="grey";

    text+=`<a target=0 style="color:${curTextcolor}" class="classProp" href=${curclass.link}>
    ${curclass.name}</a> &nbsp 
    <button onclick="copytoclipboard('${curclass.link}');">copy</button><br>
    <p>
    From <span class="time">${sh}:${sm} ${ss}</span> to
    <span class="time">${eh}:${em} ${es}<br></span>
    ${meeting}${messege}
    </p>
    `;

}

var n=today.arr.length;

for(var i=0;i<n;i++){
    showClass(today.arr[i]);
}


(function(){
    window.addEventListener('load',function(){
        var elm=document.getElementsByTagName("body")[0];
        elm.innerHTML+=text;
    });
})();