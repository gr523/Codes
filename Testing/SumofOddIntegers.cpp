#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int testCase;cin>>testCase;int sum,k;
	while(testCase--){
		cin>>sum>>k;
		int n=sqrt(sum);
		bool yes=(k%2 && sum%2 || (k%2==0) && (sum%2==0));
		if(yes && k<=n){
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
}
