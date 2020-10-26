#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll a;
    string b,ans;
    cin>>a>>b;
    ll cur=a+1,k,i,d;
    while(1){
        k=cur,i=1;
        ans="";
        while(k>0){
            d=k%10;
            if(d==4 || d==7)
                ans+=d+'0';
            k/=10;
        }
        reverse(ans.begin(),ans.end());
        if(ans==b)
            break;
        cur++;
    }
    cout<<cur<<"\n";
}