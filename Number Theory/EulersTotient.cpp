#include <bits/stdc++.h>
#define ll long long 
using namespace std;


ll phi(ll n){
	ll val=sqrt(n)+1,s=n;
	for(ll i=2;i<val;++i){
		if(n%i==0){
			s*=(i-1),s/=i;
			while(n%i==0) n/=i;
		}
	}

	if(n>1) s*=(n-1),s/=n;

	return s;
}

	
int main(){
	#ifdef localhost
		freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	#endif

	ll n;
	while(cin>>n) cout<<phi(n)<<"\n";
}