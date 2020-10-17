#include <bits/stdc++.h>
#define ll long long 
#define done(x) {cout<<x<<"\n";continue;} 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        ll mx=arr[n-1];
        for(int i=n-2,j=0;i>=0 && j<k;--i,++j){
            mx+=arr[i];
        }
        cout<<mx<<"\n";
    }
}