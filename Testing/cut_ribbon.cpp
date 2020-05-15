#include<bits/stdc++.h>
using namespace std;

const int mn=-1e5;
int mem[50000];
int a,b,c;
int x,y,z;
int dp(int n)
{
    //if(n!=org_n && (n!=a || n!=b || n!=c)) return mn;
    if(n<0) return mn;
    if(n==0) return 0;
    if(mem[n]!=-1) return mem[n];
    x=dp(n-a)+1; cout<<"dp["<<n<<"]+1="<<x<<endl;
    y=dp(n-b)+1; cout<<"dp["<<n<<"]+1="<<y<<endl;
    z=dp(n-c)+1; cout<<"dp["<<n<<"]+1="<<z<<endl;
    mem[n]=max({x,y,z});
    return mem[n];
}
int main(){
    freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);   
    int n;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    memset(mem,-1,sizeof(mem));
    printf("%d",dp(n));
    return 0;
}