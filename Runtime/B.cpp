#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll arr[(ll)1e5];
    arr[0]=0,arr[1]=1;
    ll ns[100]{};
    for(ll i=1,j=1;i<60;++i,j+=4){
        ns[i]=ns[i-1]+j;
        arr[i]=arr[i-1]+ns[i];
        cout<<ns[i]<<" "<<arr[i]<<"\n";
    }

}