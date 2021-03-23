#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    pair<int,int>a[10];
    for(int i=0;i<11;i++){
        a[i]={i+1,i*2};
    }
    for(auto [i,j] : a){
        i--;
    }
    for(auto [i,j] : a){
        cout<<i<<"\n";
    }
}
