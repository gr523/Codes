#include <bits/stdc++.h>
using namespace std;

void kmp(string &text,string &pattern,int *lps){
	
	int n=pattern.length(),l=text.length(),i=0,j=0;
	lps[0]=0;
	//i-----j//
	for(j=1;j<n;){
		if(pattern[i]==pattern[j]) lps[j]=i+1,i++,j++;
		else {
			if(i) i=lps[i-1];
			else lps[j]=0,j++;
		}
	}
	//j---------i//
	i=0,j=0;
	while(i<l){
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

}



int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	string s;cin>>s;
	int lps[s.length()];
	kmp(s,s,lps);
	for(auto i:lps) cout<<i<<" "; 
}