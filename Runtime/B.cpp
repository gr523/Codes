#include <stdio.h>
#define ll long long 

int main(){
    int roll,n=0;
    scanf("%d",&roll);
    char s[100];
    while(roll>0){
        s[n]=roll%10+'0';
        n++;
        roll/=10;
    }
    for(int i=n-1;i>=0;i--){
        for(int k=n-1;k>=i;k--){
            printf("%c",s[k]);
        }
        printf("\n");
    }
}
