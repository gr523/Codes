#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int n=12,c=1,i=1;
    while(c<=n){
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            if(c++>=n) break;
        }
        i++;
        cout<<"\n";
    }
}
