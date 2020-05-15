#include <iostream>
#include <map>
using namespace std;
int main(){
	// freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	int n,k,mx=-1,l=0,ml,mr;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	map<int,int>cnt;
	for(int i=0;i<n;++i){
		if(cnt[arr[i]]++==0){
			k--;
			if(k<0){
				k=0;
				while(--cnt[arr[l++]]>0);
			}
		}
		if(i-l>mx){
			mx=i-l; ml=l,mr=i;
		}
	}
	cout<<ml+1<<" "<<mr+1<<"\n";
}