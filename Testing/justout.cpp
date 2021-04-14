#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll a,b,c; cin>>a>>b>>c;
        ll C = powl(10,c-1)+1;
        a = powl(11,a-1),b=powl(10,b)-1;
        ll A = ceil(a/(double)C);
        ll B = ceil(b/(double)C);
        if(__gcd(A,B)>1) A++;
        cout<<A*C<<" "<<B*C<<endl;
    }
}
 
