#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;cin>>t;
    int ans[]={0,1,4,9,6,5,6,9,4,1};
    while(t--){
        string s; cin>>s;
        int n= s.length();
        int d=s[n-1]-'0';
        cout<<ans[d]<<"\n";
    }
}
