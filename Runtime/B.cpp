#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        ll arr[n],mx=-1e10,mn=1e10;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            mx=max(arr[i],mx);
        }
        for(int i=0;i<n;i++) arr[i]=mx-arr[i];
        k--;
        ll d=*max_element(arr,arr+n);
        for(int i=0;i<n;++i){
            (k&1)?cout<<d-arr[i]<<" ":cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}