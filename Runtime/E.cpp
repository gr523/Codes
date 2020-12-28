#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    map<ll,ll>lm,rm;
    int n;cin>>n;
    ll arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(!lm[arr[i]])
            lm[arr[i]]=i;
    } 
    for(int i=n;i>0;i--){
        if(!rm[arr[i]])
            rm[arr[i]]=i;
    }
    ll ans=-1,i,j;
    for(int i=1;i<=n;i++){
        i=lm[arr[i]],j=rm[arr[i]];
        if(i>0 && j>0)
            ans=max(j-i,ans);
    } 
    cout<<ans<<"\n";
}
