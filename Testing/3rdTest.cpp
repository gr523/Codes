#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    set<int>st={5,2,1,7};
    auto it=st.find(7);
    it--;
    cout<<*it<<"\n";
}
