#include <stdio.h>
#include <stdlib.h>
#define ll long long 
using namespace std;

struct db{
    char state_code[5];
    int DT_votes=0,JB_votes=0,points=0;
} states[1000000];

int n,dt,jb,pt,dtot,jtot,dpt,jpt;

int main(){
    FILE* fp=fopen("votes.txt","r"),*fr;
    while(!feof(fp)){
        fscanf(fp,"%s %d %d %d",states[n].state_code,&dt,&jb,&pt);
        states[n].DT_votes+=dt;
        states[n].JB_votes+=jb;
        states[n].points+=pt;
        dtot+=dt,jtot+=jb;
        if(dt>jb) dpt+=pt;
        else if(jb>dt) jpt+=pt;
        n++;
    }
    char winner[30]="Name of winner : DT";
    if(dpt<jpt && jtot>dtot){
        winner[17]='J',winner[18]='B';
    }else
    if(dpt==jpt && jtot>dtot){
        winner[17]='J',winner[18]='B';
    }else
    if(dpt==jpt && dtot==jtot){
        winner[0]='t',winner[1]='i',winner[2]='e',winner[3]='\0';
    }
    fclose(fp);
    fr=fopen("results.txt","w");
    fprintf(fr, "Total votes received bt DT %d\n",dtot);
    fprintf(fr, "Total points received bt DT %d\n",dpt);
    fprintf(fr, "Total votes received bt JB %d\n",jtot);
    fprintf(fr, "Total points received bt JB %d\n",jpt);
    fprintf(fr, "%s\n",winner );
    fclose(fr);
}