#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1_structure.c"
#define pmalloc(x) (struct x*)malloc(sizeof(struct x))

int choice(){
    printf("What to you want to do?\n1.Create Club\n2.Delete Club\n3.View Club info\nChoice : ");
    int c;
    scanf("%d",&c);
    return c;
}

int list_size=0;

void insert(){
    struct Clubs *tmp=pmalloc(Clubs);
    printf("Enter Name : ");
    scanf("%s\n",tmp->name);
    
    printf("Enter year of Formation : ");
    scanf("%d\n",&tmp->year);

    printf("Enter yearly revrevenue : ");
    scanf("%d\n",&tmp->income);

    printf("Enter Position : ");
    int index;
    scanf("%d\n",&index); 

    struct Clubs *cur=root,*prev;
    while(cur && index--) {
        prev=cur;
        cur=cur->next;
    }
    if(index>0) {
        printf("Index Out of Bounds\n");
        return;
    }
    prev->next=tmp;
    tmp->next=cur;
    list_size++;
}

void del(){
    char clubName[50];
    scanf("%s\n",clubName);
    if(!root->next) printf("List Empty\n");
    struct Clubs *cur=root,*prev;
    while(cur->next){
        if(!(strcmp(cur->name,clubName)))
            break;
        prev=cur;
        cur=cur->next;
    }   
    if(!cur) {printf("Club not found\n");return;}

    prev->next=cur->next;
    free(cur);

}

void showAll(){
    if(!root->next) printf("List Empty\n");
    struct Clubs *cur=root->next;
    printf("--------------------\n");
    while(cur){
        printf("%s\n%d\n%d\n",cur->name,cur->year,cur->income);
        cur=cur->next;
        printf("--------------------\n");
    }    
}


int main(){
    root=pmalloc(Clubs);
    int done=0;
    
    while(!done){
        int c=choice();
        if(c==1) insert();
        else if(c==2) del();
        else if(c==3) showAll();
        else done=1;
    }
}