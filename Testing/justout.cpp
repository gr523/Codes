#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
    map<pair<int,int>,bool>a;
    a[{1,3}]=1;
    a.clear();
    cout<<a[{1,3}]<<"\n";
}