#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n,k,r;cin>>n>>k;
        string ans="YES\n",add;
        if(!(n&1) && k&1) {
            add="2 ";
            r=n-2*(k-1);
        } else {
            add="1 ";
            r=n-k+1;
        }
        for(int i=0;i<k-1;i++) ans+=add; 
        ans+=to_string(r);
        if((n&1 && !(k&1)) || r<=0) ans="NO";
        cout<<ans<<"\n";
    }
}