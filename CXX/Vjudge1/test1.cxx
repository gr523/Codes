#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	a=100;
	b=10;
	c=10;
	int s=0;
	int max;int res[2];
	if((a>b) && (a>c)){
	   max=a;
	  
	}
	 if((b>a) && (b>c)){
	   max=b;
	   
	 }
	 else {
	   max=c;
	   
	 }

	 cout << max;
}