#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <cstdio>
#include <string.h>
using namespace std;

struct tmp{
	string name;
	int a,b;
	int rank,point,played,wins,ties,looses,gd,scored,consumed;
	tmp(){
		rank=point=played=wins=ties=looses=gd=scored=consumed=0;	
	}
};

bool comp(tmp ts1,tmp ts2){
	if(ts1.point != ts2.point)
		return ts1.point > ts2.point;
	if(ts1.wins != ts2.wins)
		return ts1.wins > ts2.wins;
	
	if(ts1.gd!=ts2.gd)
		return ts1.gd > ts2.gd;

	if(ts1.played!=ts2.played)
		return ts1.played < ts2.played;

	//return ts1.b < ts2.b;
}

bool rank(tmp ts1,tmp ts2){
	if(ts1.point!=ts2.point)
		return ts1.point>ts2.point;
	
	
	if(ts1.wins!=ts2.wins)
		return ts1.wins>ts2.wins;
	
	
	if(ts1.gd!=ts2.gd)
		return ts1.gd>ts2.gd;
	
	
	if(ts1.played != ts2.played)
		return ts1.played < ts2.played;
	
}

int main(){
	freopen("Input.txt","r",stdin); 
	freopen("Output.txt","w",stdout);

/*	fgets(s,150,stdin);
	char t1[30],t2[30];
	int g1,g2;
	sscanf(s,"%[^#]#%d@%d#%[^\n]",t1,&g1,&g2,t2);
	cout<<t1<<" "<<g1<<endl<<t2<<" "<<g2<<"\n";
*/
	char s[3][100];
	int n=3;
	for(int i=0;i<n;i++) scanf("%[^\n]",s[i]),getchar
	for(int i=0;i<n;i++) cout<<s[i];
}