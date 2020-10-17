#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll n,a,b,c;

void solve(){
    ll r =n%10;
    a=0,b=0,c=0;
    if(r==1){
        a=2,b=(n-6)/5;
    } else if(r==2){
        b=(n-7)/5,c=1;
    } else if(r==3){
        a=1,b=(n-3)/5;
    } else if(r==4){
        b=(n-14)/5,c=2;
    } else if(r==5){
        b=n/5;
    } else if(r==6){
        a=2,b=(n-6)/5;
    } else if(r==7){
        b=(n-7)/5,c=1;
    } else if(r==8){
        a=1,b=(n-3)/5;
    } else if(r==9){
        a=3,b=(n-9)/5;
    } else {
        b=n/5;
    }
    if(a<0) a=0;
    if(b<0) b=0;
    if(c<0) c=0;
}


int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        solve();
        if(a*3+b*5+c*7==n){
            cout<<a<<" "<<b<<" "<<c<<"\n";
        } else {
            cout<<-1<<"\n";
        }
    }
}