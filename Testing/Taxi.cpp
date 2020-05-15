#include <iostream>
#define ll long long 
using namespace std;

ll a,x,b,y;

ll f1(ll mid){
	return a+mid*x;
}

ll f2(ll mid){
	return b-y*mid;
}

ll bs(){
	
	if(f1(0)>f2(0))
		return f1(0);

	ll low=0,mid,high=(b-a)/x,ans;
	while(low<=high){
		mid=(high+low)/2LL;
		if(f1(mid)<=f2(mid))
			low=mid+1LL,ans=mid;
		else
			high=mid-1LL;
	}
	
	if(f1(ans+1)>=f2(ans))
		return f2(ans);	
	
	return f1(ans+1);
}


int main(){
	// freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	cin>>a>>x>>b>>y;
	cout<<bs()<<"\n";
}