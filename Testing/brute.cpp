#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	freopen("Output.txt","w",stdout);
	ll x=100,m=1,lastdigit,ans,lastdigitx,xx;
	while(m<1000){
		m=3*x;
		lastdigitx=x%10;
		xx=lastdigitx*111;
		if(xx==m){
			cout<<x<<"\n";
			break;
		}
		x++;
	}
}