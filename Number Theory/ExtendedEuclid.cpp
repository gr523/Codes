#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll GCD, x, y;
void extendedEuclid(ll A, ll B) {
    if(B == 0) 
        GCD = A,x = 1,y = 0;
    
    else {
        extendedEuclid(B, A%B);
        ll tmp = x;
        x = y;
        y = tmp - (A/B)*y;
    }
}

int main( ) {
    freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
    ll a,b;
    while(cin>>a>>b){
        extendedEuclid(a, b);
        cout<<x<<" "<<y<<" "<<GCD<<"\n";
    }
}