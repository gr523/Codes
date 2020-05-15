#include <iostream>
using namespace std;
int s=0;
int solver(int n,int m,int x){
	if(x<0) return -1;
	else s=x+(n-2*x);
	if(s%m==0) return s;
	else {
		return s=solver(n,m,--x);
	}
}
	

int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	int x,n,m;
	cin>>n>>m; x=n/2;
	cout<<solver(n,m,x);
}