#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pmalloc(x) (struct x*)malloc(sizeof(struct x))

#include "task1_structure.c"
#include "insert.c"
#include "swap.c"
#include "delete.c"
#include "printing.c"

int main(){
    root=pmalloc(Clubs);
    int c,done=0;
    while(!done){
        printf("What to you want to do?\n1.Create Club\n2.Delete Club\n3.View Club info\n4.Swap Clubs\n5.Add player\n6.Delete player\nChoice : ");
        scanf("%d\n",&c);
        switch(c){
            case 1 : {
                insert_club();
                break;
            }
            case 2 : {
                del_club();
                break;
            }
            case 3 : {
                showAll();
                break;
            }
            case 4 : {
                swap();
                break;
            }
            case 5 : {
                insert_player();
                break;
            }
            case 6 : {
                del_player();
                break;
            }
            default: done=1;
        }
    }
}