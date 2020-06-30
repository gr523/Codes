#include <bits/stdc++.h>
#define ll long long 
using namespace std;


ll n,x,y;

ll bs(){
	ll low=0,hi=n,mid,ans;
	while(low<=hi){
		mid=(low+hi)/2;
		if(y+x*mid<=n)
			low=mid+1,ans=mid;
		else
			hi=mid-1;
	}
	return y+ans*x;
}

int main(){
	int t;cin>>t;
	while(t--){
		cin>>x>>y>>n;
		cout<<bs()<<"\n";
	}
	
}