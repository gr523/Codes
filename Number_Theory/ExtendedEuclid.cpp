#include <bits/stdc++.h>
#define ll long long
#define done(x) {cout<<x<<"\n";continue;} 
using namespace std;

ll GCD, x, y, tmp;
void extendedEuclid(ll A, ll B) {
    if(B == 0) 
        GCD = A,x = 1,y = 0;
    
    else {
        extendedEuclid(B, A%B);
        tmp = x;
        x = y;
        y = tmp - (A/B)*y;
    }
}



int main( ) {
    freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
    ll a,b;
    while(cin>>a>>b){
        extendedEuclid(a,b);
        cout<<x<<" "<<y<<"\n";
    }
}