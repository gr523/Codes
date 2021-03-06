#include <algorithm>
#include <iostream>
#define errCode -2147483648
#define rte(x) if(x){ cout<<"cant acces"<<"\n"; return errCode;}
using namespace std;

void heapify(int *arr,int i,int len){
    int l = 2*i+1, r = 2*i+2;
    if(l>=len) return;
    int mx = i;
    if(arr[l] > arr[mx])
        mx = l;
    if(r<len && arr[r] > arr[mx])
        mx = r;
    if(mx != i){
        swap(arr[i],arr[mx]);
        heapify(arr,mx,len);
    }
}

class Max_Heap{
public:
    int *arr,len,maxSize;
    Max_Heap(int n){
        arr = new int[n];
        len = 0;
        maxSize = n;
    }
    int push(int x){
        rte(len==maxSize);
        int i = len++;
        arr[i] = x;
        while(i>0 && arr[i] > arr[(i-1)/2]){
            swap(arr[i],arr[(i-1)/2]);
            i = (i-1)/2;
        }
        return x;
    }
    int pop(){   // extract-max
        rte(len==0);
        int ans = arr[0];
        swap(arr[0],arr[len-1]);
        heapify(arr,0,--len);
        return ans;
    }
    int size(){
        return len;
    }
    bool empty(){
        return !len; 
    }
    int top(){
        rte(!len);
        return arr[0];
    }
    int& operator [](int index){
        return arr[index];
    }
};
