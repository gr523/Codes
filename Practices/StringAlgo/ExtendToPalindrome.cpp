#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    string s; 
    while(cin>>s){
        int n = s.length();
        int j=n-1,i=0;
        bool eq=0;
        int start=n-(n&1);
        while(j>i){
            if(s[j]==s[i]){
                if(!eq){
                    eq=1; start=i;
                }
                i++,j--;
            } else {
                eq=0;
                start=n-(n&1);
                i++;
            }
        }
        string ans;
        string tmp=s.substr(0,start);
        reverse(tmp.begin(),tmp.end());
        ans=s+tmp;
        j=n-1,i=0;
        int end=n-(n&1);
        while(j>i){
            if(s[j]==s[i]){
                if(!eq){
                    eq=1; end=j+1;
                }
                i++,j--;
            } else {
                eq=0;
                end=n-(n&1);
                j--;
            }
        }
        string ans2=s+s.substr(0,end);
        if(ans2.length()<ans.length())
            ans=ans2;
        cout<<ans<<"\n";
    }
}
