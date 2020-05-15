#include <bits/stdc++.h>
#define ll long long 
#define deb(x) cout<<#x<<"\n";
using namespace std;
const ll M=(ll)1e15+3,M2=(ll)1e15+9,base=59,base2=51;

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


void compute(ll *arr,ll *arr2,string &s){
	arr[0]=arr2[0]=(s[0]-'a'+1);
	int n=s.length();
	for(int i=1;i<n;++i){
		ll id=s[i]-'a'+1;
		arr[i]=((arr[i-1]*base)%M+id%M)%M;
		arr2[i]=((arr2[i-1]*base2)%M2+id%M2)%M2;
	}
}

int main(){
	// freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);		
	int t;cin>>t;
	while(t--){
		ll n,k;string s;cin>>n>>k>>s;
		ll arr[n+1],arr2[n+1]; 
		compute(arr,arr2,s);
		unordered_set<ll>mp,mp2;
		ll powB=BigMod(base,k,M),powB2=BigMod(base2,k,M2);
		mp.insert(arr[k-1]);
		mp2.insert(arr2[k-1]);
		for(int i=k;i<n;++i){
			ll hv=(arr[i]%M-(arr[i-k]*powB)%M+M)%M;
			ll hv2=(arr2[i]%M2-(arr2[i-k]*powB2)%M2+M2)%M2;
			mp.insert(hv);
			mp2.insert(hv2);
		}
		cout<<min(mp.size(),mp2.size())<<"\n";
	}
}