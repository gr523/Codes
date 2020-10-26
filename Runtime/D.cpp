#include <bits/stdc++.h>
#define ll long long 
#define done(x) {cout<<x<<"\n";continue;} 
using namespace std;

ll l,p,ans;

bool check(ll *arr,ll t){
    ll pm=0;
    for(int i=0;i<l;++i){
        pm+=(ll)(-1+sqrt(1+(8*t)/arr[i]))/2;
    }
    return pm>=p;
}

void bs(ll *arr){
    ll lo=0,hi=1e9,mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(check(arr,mid))
            hi=mid-1,ans=mid;
        else
            lo=mid+1;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        ans=0;
        cin>>p>>l;
        ll arr[l];
        for(int i=0;i<l;i++) cin>>arr[i];
        if(!p) done(0) 
        bs(arr);
        cout<<ans<<"\n";
    }
}