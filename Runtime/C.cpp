#include <bits/stdc++.h>
#define ll long long 
#define done(x) {cout<<x<<"\n";continue;} 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n; cin>>n;
        ll l,r,ans,count;
        if(n==2) done("2\n1 2")
        if(n==3) done("2\n1 3\n2 2")
        ans = ceil((n/2+1)+2)/2;
        cout<<ans<<"\n";
        cout<<n<<" "<<n-2<<"\n";
        n--;
        cout<<n<<" "<<n<<"\n";
        while(n>=4){
            cout<<n<<" "<<n-2<<"\n";
            n--;
        }
        cout<<1<<" "<<n<<"\n";
    }
}