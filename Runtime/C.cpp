#include <bits/stdc++.h>
#define ll long long 
using namespace std;
#define mx 100002


ll cost[mx];
int parent[mx],ln[mx];

int root (int x){
    return x==parent[x]?x:parent[x]=root(parent[x]);
}

void Union(int x,int y){
    int a=root(x),b=root(y);
    if(a==b) return;
    if(ln[b]>ln[a]) swap(a,b);
    parent[b]=a;
    ln[a]+=ln[b];
    cost[a]=min(cost[b],cost[a]);
    cost[a]=min(cost[a],min(cost[x],cost[y]));
}


int main(){
    int t;
    int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        cin>>cost[i];
        ln[i]=1;
        parent[i]=i;
    }

    int l=0;
    while(m--){
        cin>>x>>y;
        Union(x,y);
    }

    ll c=0;

    for(int i=1;i<=n;i++){
        c+=(parent[i]==i?cost[i]:0);
    } 
    cout<<c<<"\n";


}
