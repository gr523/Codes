// #include "bits.h"
#include <bits/stdc++.h>
using namespace std;

bool check(long long *arr,int n,long long mid,int cow){
	int cows=1,i=0;
	while(1){
		long long x=arr[i]+mid;
		auto value=lower_bound(arr,arr+n,x);
		auto pos=distance(arr,value);
		if(pos>=n) break;
		cows++;
		i=pos;
	}
	return cows>=cow;
}

long long bs(long long *arr,int n,int cow){
	long long high=arr[n-1]-arr[0],
		low=1,mid;
	while(low<high){
		mid=low+(high-low+1)/2;
		// cout<<"low="<<low<<" high="<<high<<" mid="<<mid<<"\n";
		if(check(arr,n,mid,cow))
			low=mid;
		else
			high=mid-1;
	}
	return low;
}


int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	long long n,cow,ans;
	int t;cin>>t;
	while(t--){
		cin>>n>>cow;
		long long arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		ans=bs(arr,n,cow);
		cout<<ans<<"\n";
	}
}
/*
1
5 3
1
2
8
4
9
*/