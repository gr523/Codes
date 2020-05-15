#include <bits/stdc++.h>
using namespace std;
const int mx=1e6+5;
int tree[mx*3];
char bin[mx];

int query(int node,int b,int e,int i){

	if(i>e || i<b) 
		return 0;

	if(b==i && e==i) 
		return tree[node];

	int left=node<<1, right=left|1, mid=(b+e)>>1;
	
	if(i>mid)
		return tree[node]+query(right,mid+1,e,i);
	else
		return tree[node]+query(left,b,mid,i);
}

void update(int node,int b,int e,int i,int j){

	if(i>e || i<b)
		return;
	if(b>=i && e<=j){
		tree[node]++; 
		return;
	}

	int left=node<<1, right=left|1, mid=(b+e)>>1;

	update(left,b,mid,i,j);
	update(right,mid+1,e,i,j);

}


void solve(){


    int t,q,n,i,j,qa,tmp;
	cin>>bin;
	char tp;
	n=strlen(bin);
	cin>>q; //getchar(); 
	memset(tree,0,mx*3);
	while(q--){
		cin>>tp;
		if(tp=='I'){
			cin>>i>>j;
			update(1,1,n,i,j);
		} else {
			cin>>i;
			tmp=query(1,1,n,i);
			qa=bin[i-1]-48;
			if(tmp & 1)
				qa=qa ^ 1;
			cout<<qa<<endl;
		}
	}
	
}

int main(){

	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	int t;cin>>t;
	for(int p=1;p<=t;p++){
		solve();
	}

}