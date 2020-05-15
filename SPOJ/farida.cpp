#include <bits/stdc++.h>
#define ll long long 
#define mx 20000
using namespace std;
ll a[mx],dp[mx];

int main(){
	// freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	int t,T=1,n;cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));
		int ans=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		dp[0]=a[0],dp[1]=max(a[0],a[1]);

		for(int i=2;i<n;++i){
			dp[i]=max(a[i]+dp[i-2],dp[i-1]);
		}
		cout<<"Case "<<T++<<": ";
		cout<<dp[n-1]<<"\n";
	}
}