#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll i=1,j=n-1,l=arr[0],r=0;
        bool rm=1;
        bool moved1=0,moved2=0;
        ll cr=0,cl=arr[0];
        ll ans=1;
        while(1){
            if(rm){
                cr=0;
                while(cr<=cl && j>=i && j!=0) cr+=arr[j--],moved1=1;
                r+=cr;
            } else {
                cl=0;
                while(cl<=cr && i<=j) cl+=arr[i++],moved2=1;
                l+=cl;
            }
            rm^=1;
            ans+=moved2+moved1;
            if(!(moved1+moved2)) break;
            moved1=moved2=0;
        }    
        cout<<ans<<" "<<l<<" "<<r<<"\n";
    }
}