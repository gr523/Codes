#include <iostream>
#include <map>
using namespace std;
int main(){
    freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
    int t,T=1;cin>>t;
    string ans[55];
    while(T<=t){
        map<string,int>track,have;
        bool yes=1;
        int n;cin>>n;
        while(n--){
            string s,ch;cin>>s;
           
            if(yes==0) continue;
            if(have[ch]>0) yes=0;
 
            for(int i=0;i<s.length();i++){
                ch+=s[i];
                have[ch]++;
                if(track[ch]>0) yes=0;
            }
 
            track[s]++;
           
        }
       
        if(yes==0)
            ans[T++]="NO\n";
        else
            ans[T++]="YES\n";
    }
    for(int i=1;i<=t;i++) cout<<"Case "<<i<<':'<<' '<<ans[i];
}