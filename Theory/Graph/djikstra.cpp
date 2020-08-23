#include <bits/stdc++.h>
#define ll long long 
#define pi pair<int,int>
using namespace std;

const int mx=1000;

vector<pi>*adj; 

int d[mx];

void djikstra(int start,int n){
    for(int i=0;i<=n;i++) d[i]=1e9;
    priority_queue<pi,vector<pi>,greater<pi>>q;
    q.push({0,start});
    d[start]=0;
    pi u,v;
    while(!q.empty()){
        u=q.top();
        q.pop();
        for(int i=0;i<adj[u.second].size();++i){
            v=adj[u.second][i];                //adj[u][i]={cost,node}
            if(d[u.second]+v.first<d[v.second]){
                d[v.second]=d[u.second]+v.first;  
                q.push(v);
            }
        }
    }
}

int main(){
    int t,T=1;cin>>t;
    while(t--){
        int n,m,a,b,w;
        cin>>n>>m;
        vector<pi>arr[n+1];
        while(m--){
            cin>>a>>b>>w;
            arr[a].emplace_back(w,b);
            arr[b].emplace_back(w,a);
        }
        adj=arr;
        djikstra(1,n);
        cout<<"Case "<<T++<<": ";
        (d[n]==1e9)?cout<<"Impossible"<<"\n":cout<<d[n]<<"\n";
    }
}

/*
2

 

3 3

1 2 10

1 3 60

2 3 10

 

3 1

1 2 40
*/