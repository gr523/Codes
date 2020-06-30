#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		ll n,s=0;cin>>n;
		while(!(n%3)){
			if(n%6) n*=2,s++;
			else n/=6,s++;
		}
		(n==1)?cout<<s<<"\n":cout<<-1<<"\n";
	}
}