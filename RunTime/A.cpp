#include <bits/stdc++.h>
#define ll long long
#define ld long double 
using namespace std;

int main(){
    ll n,r,avg,s=0,e=0;
    cin>>n>>r>>avg;
    pair<ll,ll>arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i].second>>arr[i].first;
        s+=arr[i].second;
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if((ld)s/n>=avg) break;
        if(n*avg-s<r-arr[i].second){
            e+=(n*avg-s)*arr[i].first;
            break;
        }
        e+=(r-arr[i].second)*arr[i].first;
        s+=r-arr[i].second;
    } 
    cout<<e<<"\n";
}