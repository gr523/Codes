#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll arr[n];
        map<ll,ll>freq;
        ll ind=-1,value=1e6;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        for(int i=0;i<n;++i){
            ll &x=arr[i];
            if(freq[x]==1 && x<value)
                ind=i+1,value=x;
        }
        cout<<ind<<"\n";
    }
}