#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll m=ceil((-1+sqrt(8*n))/2.0);
        cout<<m+(m*(m+1)==2*(n+1))<<"\n";
    }
}
