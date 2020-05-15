#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

struct Edge{
	int a,b,s;
	long long w;
	Edge(){
		a=b=0;
		w=0;
		s=1;
	}
};

int root(int x,int *parent){
	if(parent[x]==x)
		return x;
	return parent[x]=root(parent[x],parent);
}

long long kruskal(int n,int *parent,Edge* e){
	long long x,y,mcost=0,c;
	for(int i=0;i<n;++i){
		x=root(e[i].a,parent);
		y=root(e[i].b,parent);
		c=e[i].w;
		if(x!=y){
			mcost+=c;
			if(e[x].s>e[y].s)
				parent[y]=x,e[x].s+=e[y].s;
			else
				parent[x]=y,e[y].s+=e[x].s;
		}
	}
	return mcost;
}

bool comp(Edge a,Edge b){
	return a.w<b.w;
}

int main(){
	//freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	long long n,m,a,b,w,ans;
	int t,k;cin>>t;
	while(t--){
		cin>>n>>m;
		k=0;
		Edge e[(n+m)<<1];
		int parent[n+1];parent[0]=0;
		bool milk[n+1];
		for(int i=1;i<=n;i++) {
			cin>>milk[i],parent[i]=i;
			if(milk[i])
				e[k++].b=i;
		}
		for(int i=1;i<=m;++i,++k)
			cin>>e[k].a>>e[k].b>>e[k].w;
		sort(e,e+k,comp);
		ans=kruskal(k,parent,e);
		set<int>milkman;
		for(int i=1;i<=n;i++) if(milk[i]) milkman.insert(root(i,parent));
		for(int i=1;i<=n;i++)
			if(!milk[i] && milkman.find(root(i,parent))==milkman.end()){
				cout<<"impossible"<<"\n";
				goto imp;
			}  
		cout<<ans<<"\n";
		imp:;
	}
}

/*

1
5 7
0 1 0 1 0
1 2 11
1 3 1
1 5 17
2 3 1
3 5 18
4 5 3
2 4 5*/