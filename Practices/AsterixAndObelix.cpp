#include <bits/stdc++.h>
#define ll long long 
using namespace std;

#define nfor for(int i=0;i<mx;i++)for(int j=0;j<mx;j++)
#define reset nfor d[i][j]=INT_MAX,feast[i][j]=(arr[j]==-1?INT_MAX:arr[j]);
#define mx 81
#define fs max({feast[i][j],feast[k][j],feast[i][k],arr[k],arr[i],arr[j]})
ll u,v,tmp,d[mx][mx],feast[mx][mx],arr[mx],w;

void floydWarshall(int N){
    for(int k=0;k<N;k++){
        for(int j=0;j<N;j++){
            for(int i=0;i<N;i++){
                tmp = d[i][k]+d[k][j]+fs;
                if(tmp < d[i][j]){
                    d[i][j]=tmp;
                    feast[i][j]=fs;
                    cout<<"yay"<<"\n";
                }
            } 
        }
    }
}

int n,m,q;

int main(){
    while(cin>>n>>m>>q && (n+m+q)){
        memset(arr,-1,sizeof(arr));
        for(int i=0;i<n;i++){
            cin>>arr[i];
            d[i][i]=arr[i];
        } 
        while(m--){
            cin>>u>>v>>w; u--,v--;
            d[u][v]=w,d[v][u]=w;
        }
        reset
        floydWarshall(n);
        while(q--){
            cin>>u>>v; u--,v--;
//             cout<<d[u][v]<<"\n";
        }
//         cout<<d[0][4]<<"\n";
//         for(int i=0;i<n;i++, cout<<"\n"){
//             for(int j=0;j<n;j++){
//                 cout<<d[i][j]<<" ";
//             }
//         }
    }
}
