#include <cstdio>
using namespace std;
int main(){
	int t,r,c;scanf("%d",&t);
	while(t--){
	scanf("%d%d",&r,&c);
	for(int i=0;i<c-1;i++) printf("%s", "B");printf("%s\n","W" );;
	for(int i=1;i<r;i++){
		for(int j=0;j<c;j++)
			printf("%s","B");;			
		printf("\n");
	}
	}
}