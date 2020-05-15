#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
unordered_multimap<int,int>co;
int main(){
	freopen("Input.txt","r",stdin);freopen("Output.txt","w",stdout);
	int t;cin>>t;while(t--){
		int n,tmp1,tmp2;cin>>n;
		for(int i=0;i<n;i++){ cin>>tmp1>>tmp2; co.insert({tmp1,tmp2});}; 
		sort({co.begin(),co.end()});
		for(auto i=co.begin();i!=co.end();i++) cout<<i->first<<" "<<i->second<<endl;
		cout<<"New sort"<<endl;
	}
}