#include <stdio.h>
#include <string.h>

struct x{
    char s[100];
}f[2];

int main(){
    f[1].s[0]='f';
    printf("%d\n",strlen(f[1].s));
}