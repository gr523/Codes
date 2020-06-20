#include <bits/stdc++.h>
#define ll long long 
#define ld long double
using namespace std;
int main(){

	string rgx,s="I have 10.34 Euro";

	rgx="\\D+([0-9]+.?(?:[0-9]+)?) (\\D+)?";
	
	smatch m;
	regex_search(s,m,regex(rgx));

	for(auto i:m) cout<<i<<"\n"; 
}