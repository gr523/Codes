#include <bits/stdc++.h>
#define ll long long 
using namespace std;


ll mem[102][102];

ll nCr(ll n,ll r){
    if(mem[n][r]!=0)
        return mem[n][r];
    if(n==r || r==0) 
        return mem[n][r]=1;
    if(n-r==1 || r==1)
        return mem[n][r]=n;

    return mem[n][r]=nCr(n-1,r-1)+nCr(n-1,r); 
}

ll ncr[150][150];
void pascal(int n){
    for(int i=1;i<=n;i++){
        ncr[i][0]=1,ncr[i][1]=i;
        for(int j=2;j<=n;j++)
            ncr[i][j]=ncr[i-1][j]+ncr[i-1][j-1];
    }    
}



int main(){
    
}