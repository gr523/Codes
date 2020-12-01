#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n,x=-1; cin >>n;
        map<ll,ll>freq;
        ll arr[n],ans=1e6;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            if(x==arr[i]) continue;
            x=arr[i];
            freq[x]++;
        }

        for(int i=0;i<n;i++){
            ans=min(ans,freq[arr[i]]-(i==n));
        } 


        cout<<ans+1<<"\n";
    }
}