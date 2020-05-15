#include <iostream>
#include <vector>
using namespace std;

int n,cnt=0;
string arr,s;

void subset(int i){
	if(i==n) {
		cout<<arr<<endl;
		return;
	}
	subset(i+1);
	arr+=s[i];
	subset(i+1);  	
	arr.pop_back();
}


int main(){
	freopen("Output.txt","w",stdout);
	s="abc";
	n=s.length();
	subset(0);
}