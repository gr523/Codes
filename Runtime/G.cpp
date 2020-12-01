
#include <bits/stdc++.h> 
#define ll long long
using namespace std; 

ll n,k;
  
bool valid(ll mid, ll *arr){ 
    ll c=1,s=0; 
    for (int i = 0; i < n; i++) { 
        if (arr[i] > mid) 
            return 0; 
        s+=arr[i]; 
        if (s > mid) { 
            c++; 
            s=arr[i]; 
        } 
    } 
    return c<=k;  
} 

  

int bs(ll *arr) { 
    ll low=1,hi=0,mid,ans=0; 
    for (int i=0;i<n;i++) hi+=arr[i]; 
    while (low<=hi) { 
        mid=(low+hi)>>1LL;  
        if (valid(mid,arr)) 
            ans=mid,hi=mid-1;
        else
            low = mid + 1; 
    }

    return ans; 
} 

  

int main() { 
    int t,T=1;cin>>t;
    while(t--){
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i]; 
        cout<<"Case "<<T++<<": ";  
        cout<<bs(arr)<<"\n";
    }
} 