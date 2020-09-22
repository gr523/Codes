#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int num,odd=0,even=0,ro=0,re=0,bo=0,be=0;
        for(int i=1;i<=n;i++){
            num = s[i-1] - 48;
            if(i&1){
                if(num&1) odd++;
            } else {
                if(!(num&1)) even++;
            }
        }
        int ans=(odd>=even?1:2);
        if(even>0 && !(n&1)) ans=2;
        if(odd>0 && n&1) ans=1;
        if(!odd && !even) {
            ans=(n&1?2:1);
        }
        cout<<ans<<"\n";
    }
}