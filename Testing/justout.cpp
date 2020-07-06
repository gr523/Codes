#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
    int t,T=1;cin>>t;
    while(t--){
        pair<pair<int,int>,string>arr[10];
        int tmp,mx=-1;
        string stmp;
        for(int i=0;i<10;++i){
            cin>>stmp>>tmp;
            arr[i]={{tmp,i},stmp};
            mx=max(mx,tmp);
        }
        sort(arr,arr+10);
        cout<<"Case #"<<T++<<":\n";
        for(auto i:arr)
            if(i.first.first==mx)
                cout<<i.second<<"\n"; 
    }
}