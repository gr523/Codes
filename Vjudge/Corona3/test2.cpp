#include <bits/stdc++.h>
#define ll long long 
using namespace std;

const ll M=(ll)1e9+7;
unordered_set<ll>mp;

ll BigMod(ll base,ll power,ll mod){
	ll result=1;
	while(power){
		if(power&1)
			result=(result*base)%mod;
		base=(base*base)%mod;
		power/=2;
	}
	return result;
}

int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		mp.clear();
		ll n,k,ans=1,base=7,x=5;
		cin>>n>>k; 
		char s[n+100];
		cin>>s;
		// n=strlen(s);
		ll hv=0,powk;
		for(ll i=0;i<k;++i){
			ll id=s[i]-'a';
			powk=BigMod(base,i,M);
			ll tmp = ((id*powk)%M*(x*id)%M)%M;
			hv+=tmp;
		}
		mp.insert(hv);
		for(ll i=1;i+k-1<n;++i){
			ll id1=(s[i-1]-'a'),id2=s[i+k-1]-'a';
			hv-=(id1%M); hv/=base;
			ll tmp = ((id2*powk)%M*(x*id2)%M)%M;
			hv+=tmp;
			mp.insert(hv);
		}
		ans=mp.size();
		cout<<ans<<"\n";
	}
}

/*

5
3 2
aaa
5 1
abcba
4 2
abac
10 2
abbaaaabba
7 3
dogodog

*/