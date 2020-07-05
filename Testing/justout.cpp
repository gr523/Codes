#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int neg=0,pos=0;        
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>0)
                pos++;
            else if(arr[i+1]-arr[i]<0)
                neg++;
            else pos++,neg++;
        }
        if(pos>neg){
            for(int i=0;i<n-1&&pos>neg;++i){
                if(arr[i+1]-arr[i]>0){
/*                    if(i>0){
                        if(arr[i]-arr[i-1]>0 && -arr[i]-arr[i-1]<0)
                            pos-=2;                
                    } else pos--;
*/                    arr[i]=-arr[i];
                      pos--;i++;
                }
            }
        } else if(pos<neg){
            for(int i=0;i<n-1&&neg>pos;++i){
                if(arr[i+1]-arr[i]<0){
/*                    if(i>0){
                        if(arr[i]-arr[i-1]<0 && -arr[i]-arr[i-1]>0)
                            neg-=2;                
                    } else neg--;
*/                    arr[i]=-arr[i];neg--,i++;
                }
            }        
        }

        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<"\n"; 
    }
}