#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll n,m,arr[101][101];
ll a,b,c,d;

#define need(num) fabs(num-a)+fabs(num-b)+fabs(num-c)+fabs(num-d)

int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        ll ans=0,tmp;
        for(int i=0;i<n/2;i++){
            for(int j=0;j<m/2;j++){
                a=arr[i][j],d=arr[n-i-1][m-j-1];
                b=arr[n-i-1][j],c=arr[i][m-j-1];
                tmp=min({need(a),need(b),need(c),need(d)});
                ans+=tmp;
            }
        }
        if(n&1){
            ll i=n/2;
            for(int j=0;j<m/2;j++){
                a=arr[i][j],b=arr[i][m-j-1];
                ans+=fabs(a-b);
            }
        }
        if(m&1){
            ll j=m/2;
            for(int i=0;i<n/2;++i){
                a=arr[i][j],b=arr[n-i-1][j];
                ans+=fabs(a-b);
            }
        }

        cout<<ans<<"\n";
    }
}

