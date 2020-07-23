#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll lcmof2(ll a,ll b){
    return a*b/__gcd(a,b);
}

int main(){
    ll n,t;
    while(cin>>n>>t && (n+t)){
        ll coins[n],tables[t],h[t][2];
        for(int i=0;i<n;i++) cin>>coins[i];
        for(int i=0;i<t;i++) cin>>tables[i],h[i][0]=1e12,h[i][1]=1e12;
        ll lcm1,lcm2,lcm3,lcm,lo,hi;
        for(int i=0;i<n;i++){
            lcm1 = coins[i];
            for(int j=i+1;j<n;j++){
                lcm2 = lcmof2(lcm1,coins[j]);
                for(int k=j+1;k<n;k++){
                    lcm3 = lcmof2(lcm2,coins[k]);

                    for(int l=k+1;l<n;l++){
                        lcm=lcmof2(lcm3,coins[l]);

                        for(int i=0;i<t;++i){
                            lo=tables[i]/lcm*lcm,
                            hi=ceil(tables[i]/(long double)lcm)*lcm;
                            if(fabs(tables[i]-lo)<fabs(h[i][0]-tables[i]))
                                h[i][0]=lo;
                            if(fabs(tables[i]-hi)<fabs(h[i][1]-tables[i]))
                                h[i][1]=hi;
                        }

                    }

                }
            }
        }

        for(int i=0;i<t;i++){
            cout<<h[i][0]<<" "<<h[i][1]<<"\n";
        } 
    }
}