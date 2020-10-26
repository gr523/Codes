#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s[n+2];
        s[0]=string(n,'0');
        s[0][0]=s[0][n-1]='1';

        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                s[i]+=(s[i-1][(j+1)%n]);
            }
        }
        for(int i=0;i<n;i++,cout<<"\n"){
            for(int j=0;j<n;j++){
                cout<<s[i][j]<<" ";                
            }
        }

    }
}