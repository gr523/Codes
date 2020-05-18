#include <bits/stdc++.h>
#define ll long long 
using namespace std;

const int mx=(int)1e6;
bool isprime[mx]; 
int primes[78500],primeno=0; //78500 for 1e6,664600 for 1e7,6303310 for 1e7+1e8

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

int divs[mx+1];
void countdivisors(int N){
	int c,total=1,n=N;
	int val=sqrt(n)+1;
	
	for(int i=0;primes[i]<val;++i){
		if(n%primes[i]==0){
			c=1;
			while(n%primes[i]==0){
				n/=primes[i];
				c++;
			}
			total*=c;
			val=sqrt(n)+1;
		}
	}
	if(n>1) total<<=1;
	divs[N]=total;
}

int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	sieve();
	countdivisors(1e6);
	cout<<divs[(int)1e6]<<"\n";
}