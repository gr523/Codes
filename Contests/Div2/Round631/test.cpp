#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    //freopen("Input.txt","r",stdin); 
    freopen("Output.txt","w",stdout);
    int arr[]={1,2,5,7,9};
    cout<<lower_bound(arr,arr+5,5)-arr;
}