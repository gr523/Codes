#include <bits/stdc++.h>
#define ll long long 
#define done(x) {cout<<x<<"\n";continue;} 
using namespace std;

int di[]={0,0,1,-1},
    dj[]={1,-1,0,0};


char s[12][12];
bool vis[12][12];
pair<int,int>pos[26];
int n,alp,d[12][12];

bool bfs(char now){
    memset(d,0,sizeof(d));
    memset(vis,0,sizeof(vis));
    queue<pair<int,int>>nodes;
    nodes.push(pos[now-'A']);
    vis[pos[now-'A'].first][pos[now-'A'].second]=1;
    s[pos[now-'A'].first][pos[now-'A'].second]='.';

    pair<int,int>prev,cur;
    while(!nodes.empty()){
        prev=nodes.front(),nodes.pop();
        for(int i=0;i<4;i++){
            cur={prev.first+di[i],prev.second+dj[i]};
            if( cur.first>=n || cur.second>=n || cur.first<0 || \
                    cur.second<0 || s[cur.first][cur.second]=='#' || \
                    vis[cur.first][cur.second])
                continue;
            if(s[cur.first][cur.second]!='.' && s[cur.first][cur.second]!=now+1) continue;
            d[cur.first][cur.second]=d[prev.first][prev.second]+1;
            if(s[cur.first][cur.second]==now+1) return 1;
            nodes.push(cur);
            vis[cur.first][cur.second]=1;
        } 
    }
    return 0;
}

int main(){
    int t,T=1;cin>>t;
    while(t--){
        alp=0;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               cin>>s[i][j]; 
               if(s[i][j]>='A' && s[i][j]<='Z'){
                    pos[s[i][j]-'A']={i,j};
                   alp++;
               }
            }
        }
        cout<<"Case "<<T++<<": ";
        if(alp==1) done(0);
        int ans=0;
        bool ok=0;
        for(int i=0;i<alp-1;i++){
                if(!(ok=bfs('A'+i))) break;
                auto next=pos[i+1];
                ans+=d[next.first][next.second];
        } 
        if(!ok) done("Impossible")
        cout<<ans<<"\n";
    }
}
