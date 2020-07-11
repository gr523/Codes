#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    FILE *fp;
    fp=fopen("file","r+");
    int k=7;


    fseek(fp,10,SEEK_SET);
    cout<<ftell(fp)<<"\n";
    
    // fputs("evil",fp);
    fclose(fp);
}