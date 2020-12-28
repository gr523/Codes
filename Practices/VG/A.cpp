#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int di[]={0,0,1,-1},
    dj[]={1,-1,0,0};

char s[501][501];
int n,m,d[501][501];
bool vis[501][501];
queue<pair<int,int>>st;

int bfs( pair<int,int>start ){
    int c=(s[start.first][start.second]=='C'); 
   queue<pair<int,int>>nodes;
   nodes.push(start);
   st.push(start);
    vis[start.first][start.second]=1;
   pair<int,int>prev,cur;
  
   while(!nodes.empty()){
        prev=nodes.front(); nodes.pop();
        for(int i=0;i<4;i++){
            cur={prev.first+di[i],prev.second+dj[i]};
            if(cur.first<0 || cur.first>=n || cur.second<0 || cur.second>=m ||\
                    s[cur.first][cur.second]=='#' || vis[cur.first][cur.second]) continue;
            nodes.push(cur);
            st.push(cur);
            if(s[cur.first][cur.second]=='C') c++;
            vis[cur.first][cur.second]=1;
        } 
   }
   return c;
}

int main(){
    int t,T=1;cin>>t;
    while(t--){
        memset(d,0,sizeof(d));
        memset(vis,0,sizeof(vis));
        int q;cin>>n>>m>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               cin>>s[i][j];
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(vis[i][j] || s[i][j]=='#') continue;
               c=bfs({i,j});
               while(!st.empty()){
                   auto p=st.front(); st.pop();
                   d[p.first][p.second]=c;
               }
            }
        }
        int x,y;
        cout<<"Case "<<T++<<":\n";
        while(q--){
            cin>>x>>y;
            cout<<d[x-1][y-1]<<"\n";
        }
    }
}
