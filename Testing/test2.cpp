#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int n,col,x,y;
int m[100000][3];
string s[10000];

int paint(int r,char now,int len=1,int sum=0){
	if(r>=col) return 0;
	
	int c=0;
	for(int i=0;i<n;i++) if(s[i][r]=='#') c++; 
	if(now=='#'){
		sum+=n-c;
		if(len<x)
			return m[r][0]=sum+paint(r+1,'#',len+1,n-c);
		else
		if(len>y)
			return m[r][1]=sum+paint(r+1,'.',1,sum-n+c);
		else{
			m[r][0]=sum+paint(r+1,'#',len+1,sum-n+c),m[r][1]=sum+paint(r+1,'.',1,sum-n+c);
		}
		
	} else 
	if(now=='.'){
		sum+=c;
		if(len<x)
			return m[r][1]=sum+paint(r+1,'.',len+1,sum-c);
		else
		if(len>y)
			return m[r][0]=sum+paint(r+1,'#',1,sum-c);
		else{
			m[r][1]=sum+paint(r+1,'.',len+1,sum-c),m[r][0]=sum+paint(r+1,'#',1,sum-c);		
		}
		
	} else {
		if(y>1)
			m[r][0]=(n-c)+paint(r+1,'#',len+1,0),
			m[r][1]=c+paint(r+1,'.',len+1,0);
		else
			m[r][0]=(n-c)+paint(r+1,'.',1,0),
			m[r][1]=c+paint(r+1,'#',1,0);
	}
	return min(m[r][0],m[r][1]);
}


int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	cin>>n>>col>>x>>y;
	for(int i=0;i<n;i++) cin>>s[i];
	cout<<paint(0,'F')<<"\n";
}