#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int getid(char c){
	switch(c){
		case ' ': return 26;
		case 'A' ... 'Z': return (c-'A');
		case 'a' ... 'z': return (c-'a'+27);
	}
}
int revid(int i){
	switch(i){
		case 26 : return ' ';
		case 0 ... 25 : return (i+'A');
		case 27 ... 52 : return (i-27+'a');
	}
}

int main(){
	freopen("Output.txt","w",stdout);
	for(int i=0;i<53;++i){
		cout<<(char)revid(i)<<"\n";
	}
}