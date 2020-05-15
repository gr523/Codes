#include <bits/stdc++.h>
#define ll long long 
using namespace std;

const int mx=(int)1e7;
bool isprime[mx];
int primes[(int)1e6],primeno=0;

void sieve(){
	int n=sqrt(mx)+1;
	memset(isprime,1,sizeof(isprime));
	isprime[0]=isprime[1]=0;
	for(int i=2;i<n;i++){
		if(isprime[i])
			for(int j=i*i;j<mx;j+=i)
				isprime[j]=0;		
	}
	for(int i=2;i<mx;i++) if(isprime[i]) primes[primeno++]=i; 
}


int main(){
	freopen("Output.txt","w",stdout);
	sieve();
	cout<<*(lower_bound(primes,primes+primeno,1123))<<"\n";	
}