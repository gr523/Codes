#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		vector<ll>a;
		for(int i=0;i<n;i++) {
			cin>>arr[i];
			if(arr[i]%k) a.emplace_back(arr[i]);
		}
		n=a.size();
		ll x=1,s=1,stop=n;
		while(stop){
			for(int i=0;i<n;++i,s++){
				if(a[i]!=-1){
					if((a[i]+x)%3==0){
						a[i]=-1,stop--;
						continue;
					}
				}
			}
			x++;
		}

		if(!n)cout<<0<<"\n";
		else cout<<s<<"\n";

	}
}