#include <iostream>
using namespace std;
int lowestint(int arr[],int n){
	int min=arr[0];
	for(int i=1;i<n;i++){
		if (arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}

