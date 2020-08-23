#include <bits/stdc++.h>
#define ll long long 
using namespace std;
#define done(x) {cout<<x<<"\n";continue;} 

int ans;
#define f(a,b) (a>b?a/=b:b/=a);(a>b?a%=b:b%=a);(a>b?ans=a:ans=b);

int main(){
    int a=3,b=5;
    f(a,b);
    cout<<ans<<"\n"; 
}