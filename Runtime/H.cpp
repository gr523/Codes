#include <bits/stdc++.h>
#define ll long long 
using namespace std;

double C,D,A;

#define fn(x) 2*x/(sqrt(A*A+x*x))
#define xn(x) (C-x)/(sqrt(D*D+(C-x)*(C-x)))
double bs(){
    double lo=0,hi=C,mid;
    int c=100;
    double prev=0,cur1,cur2;
    while(c--){
        mid=(hi+lo)/2;
        cur1=fn(mid);
        cur2=xn(mid);
        if(cur1-cur2>0)
            hi=mid;
        else 
            lo=mid;
    }
    return mid;
}

int main(){
    int t;cin>>t;
    while(t--){
        cin>>C>>D>>A;
        double x=bs();
        double ans=sqrt(A*A+x*x)+sqrt(D*D+(C-x)*(C-x));
        cout<<setprecision(10)<<fixed<<ans<<"\n";
    }
}
