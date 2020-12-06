#include <bits/stdc++.h>
#define ll long long 
#define pi pair<int,int>
using namespace std;

const int mx=1000000;

vector<pi>adj[mx]; 

ll d[mx],parent[mx];

void djikstra(int start,int n){
    for(int i=0;i<=n;i++) d[i]=1e18;
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
                parent[v.second]=u.second;
                q.push(v);
            }
        }
    }
}

int main(){
    int n,m,a,b,w;
    cin>>n>>m;
    while(m--){
        cin>>a>>b>>w;
        adj[a].emplace_back(w,b);
        adj[b].emplace_back(w,a);
    }
    djikstra(1,n);
    if(d[n]==1e18){
        cout<<"-1"<<"\n"; return 0;
    }
    vector<int>path;
    int now=n;
    while(now!=1){
        path.emplace_back(now);
        now=parent[now];
    }
    path.emplace_back(1);
    for(int i=path.size()-1;i>=0;i--){
        cout<<path[i]<<" ";
    } 
    for(int i=1;i<=n;++i){
        
        cout<<d[i]<<"\n";
    }
}


