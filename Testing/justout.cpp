#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int pr=0,pb=0;
bool red=1;

void s(int r,int b){
    int m=1;
    while(r>0 || b>0){
        if(m&1){
            if(red && b>0){
                b--;
                pb++;
                red=0;
            } else if(!red && r>0){
                r--;
                pb++;
                red=1;
            } else if(red && r>0){
                r--;
                red=1;
            } else if(!red && b>0){
                b--;
                red=0;
            }
        } else {
            if(red && r>0){
                r--;
                pr++;
                red=1;
            } else if(!red && b>0){
                b--;
                pr++;
                red=0;
            } else if(!red && r>0){
                r--;
                red=1;
            } else if(red && b>0){
                b--;
                red=0;
            }
        }
        m++;
    }
}

int main(){
    int r,b;
    cin>>r>>b;
    red=0;
    s(r,b-1);
    cout<<pr<<" "<<pb<<"\n";
}