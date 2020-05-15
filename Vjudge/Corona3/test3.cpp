#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int ans;
void kmp(string &text,string &pattern){
	
	int n=pattern.length(),l=text.length(),i=0,j,lps[n];
	lps[0]=0;
	
	for(j=1;j<n;){
		if(pattern[i]==pattern[j]) lps[j]=i+1,i++,j++;
		else {
			if(i) i=lps[i-1];
			else lps[j]=0,j++;
		}
	}

	i=0,j=0;
	while(i<n){
		if(pattern[j]==text[i])
			i++,j++;
		else {
			if(j) j=lps[j-1];
			else i++;
		}
		if(j==n){
			j=lps[j-1];
		}
	}
	ans=j;


}






int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	string text,pattern;
	int t,T=1;cin>>t;
	while(t--){
		cin>>pattern;
		text=pattern;
		int n=text.length();
		reverse(pattern.begin(),pattern.end());
		kmp(text,pattern);
		ans=2*n-ans;
		if(text==pattern) ans=n;
		cout<<"Case "<<T++<<": "<<ans<<endl;
	}
}