#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t,T=1;cin>>t;
    while(t--){
        string a; ll b;
        cin>>a>>b;
        ll n=a.length(),start=0;
        if(a[0]=='-') start=1;
        ll s=0;
        for(int i=start;i<n;++i){
            s=s*10+a[i]-'0';
            s%=b;
        }
        cout<<"Case "<<T++<<": ";
        cout<<(!s?"divisible\n":"not divisible\n");    
    }
}