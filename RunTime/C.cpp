#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	
	int t;cin>>t;
	while(t--){
		ll n,closed=0;string s;
		cin>>n>>s;
		bool ono=0;
		ll cl=0,op=0;
		for(int i=0;i<n;++i){
			if(s[i]=='(') op++;
			if(op && s[i]==')') op--;
		}
		cout<<op<<"\n";
	}
}