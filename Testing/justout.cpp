#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	ll s,x=4;
	ll arr[1000000],n=0;
	while(cin>>s) arr[n++]=s;
	
	for(int i=0;i<n;++i){
		s=arr[i]^x;
		cout<<s<<"\n";
	}
}