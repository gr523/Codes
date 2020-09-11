#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll n,x,y,dif,d;

ll calcd(){
    for(int i=1;i<dif;++i){
        if(dif%i==0){
            if(dif/i+1<=n)
                return i;
        }
    }
    return dif;
}

#define work(d,cond)\
    while(n>0 && cond){cout<<now<<" "; now+=d; n--;}

int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>x>>y;
        dif=y-x;
        d=calcd();
        ll now=x;
        work(d,now<=y)

        now=x-d;
        work(-d,now>=1)

        now=y+d;
        work(d,1)
        
        cout<<"\n";
    }
}