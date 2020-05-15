#include <bits/stdc++.h>
#define ll long long 
using namespace std;


ll lqa(ll *arr,int n,ll value){
	ll i=lower_bound(arr,arr+n,value)-arr;
	if(i==0 && arr[i]>value) return -1;
	if(i==n) i--;
	if(arr[i]>value && i) i--;	
	return i;
}


int main(){
	freopen("Output.txt","w",stdout);
	int n=6;
	ll arr[]={2,3,5,20,23,30};
	int ind=lqa(arr,n,5);
	cout<<arr[ind]<<"\n";
}