#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	int n,k,t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		string s;
		for(int i=0;i<n-2;i++) s+='a';
			s+="bb";
		string ks[(n*(n-1))/2+2];
		int l=0;
		do{
			ks[l++]=s;
		} while(next_permutation(s.begin(),s.end()));
		
		cout<<ks[k-1]<<endl;
	}
}