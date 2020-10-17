#include <stdio.h>
#include <math.h>
#define ll long long
#define findn(s) (-1+sqrt(1+24*s))/6
#define cardsneeded(n) n*(n+1) + (n*(n-1))/2

int main(){
    ll t=1e9,mx=-1;
    // scanf("%d",&t);
    for(ll i=1e8;i<t;i++) {
        ll cards=i; 
        // scanf("%lld",&cards);
        ll n=findn(cards),ans=0;
        while(n>0){
            ans++;
            cards-=cardsneeded(n);
            n=findn(cards);
        }
        if(ans>mx) mx=ans;
    }
    printf("%lld\n",mx);
}

/*
5
3 14 15 24
1000000000
*/