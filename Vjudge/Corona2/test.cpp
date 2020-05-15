#include <iostream>
#include <unordered_map>
#include <cstdio>
using namespace std;

struct Team{
	string name;
	int rank,point,played,wins,ties,looses,gd,scored,consumed;
	Team(){
		rank=point=played=wins=ties=looses=gd=scored=consumed=0;	
	}
};

unordered_map<string,int> d;

void update(Team *team,int s,int c){
	team->scored+=s;
	team->consumed-=c;
	team->played++;
	team->gd+=(s-c);
	if(s==c) team->point++,team->ties++;
	else if(s>c) team->point+=3,team->wins++;
	else team->looses++;

}

void parse(string s,Team **team,unordered_map<string,int>){
	int i,j,n=s.length();
	string s1,s2,g1,g2;
	for(i=0;s[i]!='#';++i) s1+=s[i]; 
	if(s[i+3]=='@') g1+=(s[i+1]+s[i+2]),i+=3;
	else g1+=s[i+1],i+=2;
	if(s[i+3]=='#') g2+=(s[i+1]+s[i+2]),i+=4;
	else g2+=s[i+1],i+=3;
	for(;i<n;i++) s2+=s[i];
	cout<<s1<<endl<<s2;

}

int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	string tmp;
	getline(cin,tmp);
	Team *team[2];
	team[0]=new Team();
	parse(tmp,team,d);
}