#include <iostream>
using namespace std;
int p[10],s[10];

/*int root(int x){
	return (p[x]==x?x:p[x]=root(p[x]));
}
*/

int root(int x){
	while(p[x]!=x){
		// p[x]=p[p[x]];
		x=p[x];
	}
	return x;
}

void un(int a,int b){
	int x=root(a),y=root(b);
	if(x!=y){
/*		if(s[x]>s[y])
			p[y]=x,s[x]+=s[y];
		else
			p[x]=y,s[y]+=s[x];
*/	
		p[x]=y;
	}
}	

int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	int n=7,m=3,a,b;

	for(int i=1;i<=n;i++) p[i]=i,s[i]=1; 
	while(m--){
		cin>>a>>b;
		un(b,a);
	}
	for(int i=1;i<=n;i++) cout<<p[i]<<" ";
}