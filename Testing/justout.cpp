#include <bits/stdc++.h>
#define ll long long 
#define done(x) {cout<<x<<"\n";return 0;} 
using namespace std;

int main(){
    string s;
    cin >> s;
    int n=s.length();
    bool pal=1;
    for(int i=0;i<n/2 && pal;++i){
        if(s[i]!=s[n-i-1]) pal=0;
    }
    if(pal) done(0)
    done("R "<<n-1)
}