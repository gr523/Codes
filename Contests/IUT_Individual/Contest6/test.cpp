#include <iostream>
using namespace std;
int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	long long l,r,x,bits=0,ans=0,m=1;
	cin>>l>>r;
	x=l^r;
	while(x) x>>=1,bits++; 
	// while(bits--) ans+=m,m<<=1;
	cout<<(1LL<<bits)-1<<"\n";
}