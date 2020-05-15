#include <iostream>
#define n cout<<endl;
using namespace std;

void s(int i,int j){
	for(int k=i;k<=j;k++)
		cout<<"*";
}

void h(int i,int j){
	for(int k=i;k<=j;k++)
		cout<<"#";
}

void d(int i,int j){
	for(int k=i;k<=j;k++)
		cout<<".";
}

void sp(int i,int j){
	for(int k=i;k<=j;k++)
		cout<<" ";
}



int main(){
	//freopen("Input.txt","r",stdin); 
	freopen("Output.txt","w",stdout);

	sp(1,5); s(6,13); sp(14,21); n

	sp(1,4); s(5,16); sp(17,21); n

	sp(1,4); h(5,8); d(9,12); h(13,13); d(14,14); n

	sp(1,2); h(3,3); d(4,5); h(6,8); d(9,13); h(14,15); d(16,19); n

	sp(1,2);  h(3,5); d(6,12); h(13,18); n

	sp(1,5); d(6,16); n

	sp(1,4); h(5,6); s(7,7); h(8,14); n

	sp(1,1); h(2,5); s(6,12); h(13,18); n

	d(1,3); h(4,4); s(5,7); d(8,8); s(9,12); d(13,13); s(14,14); h(15,17); d(18,21); n

	d(1,4); s(5,14); h(15,16); d(17,21); n

	d(1,4); s(5,8); sp(9,12); s(13,17); d(18,21); n 

	sp(1,2); h(3,6); sp(7,14); h(15,18); n

	h(1,6); sp(7,14); h(15,20); n

}