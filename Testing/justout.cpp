#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll n; cin>>n;
        ll x;
        bool f=0;
        for(int i=0;i<n;i++){
            cin>>x;
            ll s=sqrt(x);
            f|=(s*s!=x);
        } 
        cout<<(f?"YES\n":"NO\n");	
    }
}
