#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	freopen("Output.txt","w",stdout);
	int a[10][7];
	a[2][5]=25;
	a[3][6]=36;
	a[1][6]=16;
	a[9][5]=95;
	a[0][4]=4;
	a[8][0]=80;
	int *arr=&a[0][0];
	cout<<arr[7*9+5]<<"\n";
}