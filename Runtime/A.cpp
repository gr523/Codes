#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n,tmp;cin>>n;
        set<ll>arr;
        for(int i=0;i<n;i++) cin>>tmp,arr.emplace(tmp);
        (arr.size()==1)?cout<<n<<"\n":cout<<1<<"\n";
    }
}