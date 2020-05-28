#include <bits/stdc++.h>
#define ll long long 
using namespace std;

const int mx=(int)1e6+100;
bool isprime[mx+1]; 
int primes[78504],primeno=0; //78600 for 1e6,664700 for 1e7,6303400 for 1e7+1e8

void sieve(){
	memset(isprime,1,sizeof(isprime));
	int n=sqrt(mx)+1;
	isprime[0]=isprime[1]=0;
	for(int i=2;i<=n;i++){
		if(isprime[i])
			for(int j=i*i;j<=mx;j+=i)
				isprime[j]=0;		
	}
	for(int i=2;i<=mx;i++) if(isprime[i]) primes[primeno++]=i; 
}


int main(){
	freopen("Output.txt","w",stdout);
	sieve();
	
	cout<<"int primes[]={";
	for(int i=0;i<primeno-1;i++) cout<<primes[i]<<",";
	cout<<primes[primeno-1]<<"};\n";

	cout<<"bool isprime[]={";
	for(int i=0;i<mx;i++) cout<<isprime[i]<<",";
	cout<<isprime[mx]<<"};";

}