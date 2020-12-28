#include <bits/stdc++.h>
#define ll long long 
using namespace std;
#define N 501

int di[]={0,0,1,-1},
    dj[]={1,-1,0,0},n,m,k;
pair<int,int> l[N*N];
bool vis[N][N];
char s[N][N];

#define invalid(x,y) x>=n || x<0 || y>=m || y<0 || vis[x][y] || s[x][y]=='#'

int bfs(int px,int py){
    int points=0;
    queue<pair<int,int>>q;
    q.push({px,py});
    l[points++]={px,py};
    vis[px][py]=1;
    int cx,cy;
    while(!q.empty()){
        px=q.front().first,py=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            cx=px+di[i],cy=py+dj[i];
            if(invalid(cx,cy)) continue;
            q.push({cx,cy});
            vis[cx][cy]=1;
            l[points++]={cx,cy};
        } 
    }
    return points;
}


int main(){
    int x=-1,y;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>s[i][j];
            if(s[i][j]=='.') x=i,y=j;
        }
    }
    int nodes=bfs(x,y);
    for(int i=nodes-1;k>0;i--,k--){
        s[l[i].first][l[i].second]='X';
    } 
    for(int i=0;i<n;i++,cout<<'\n'){
        for(int j=0;j<m;j++){
            cout<<s[i][j]<<"";
        }
    }
}
