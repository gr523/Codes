#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll arr[n+1]{},ans[n+1]{},ind=1;
		for(int i=1;i<=n;i++) cin>>arr[i];
	
		ans[0]=arr[1];
		ll s=0;
		bool f;
		for(int i=2;i<n;++i){
			ll tk=(fabs(arr[i]-arr[i+1])+fabs(arr[i]-arr[i-1])),
			   ntk=fabs(arr[i+1]-arr[i-1]);
			
			if(tk>ntk){
				ans[ind++]=arr[i];
			}	
		}

		ans[ind++]=arr[n];

		cout<<ind<<"\n";
		for(int i=0;i<ind;i++) cout<<ans[i]<<" "; 
		cout<<"\n";
	}
}