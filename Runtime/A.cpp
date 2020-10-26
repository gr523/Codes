#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;
        bool yes=0;
        double s=0;
        cin>>n>>m;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int k=1;k<=n;++k){
            s=0;
            for(int i=0;i<n;++i){
                s+=arr[i]/(double)(k%n);
            }
            if(s==m) yes=1;
        }
        cout<<(yes?"YES\n":"NO\n");    
    }
}