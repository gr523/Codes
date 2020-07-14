#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1_structure.c"
#define pmalloc(x) (struct x*)malloc(sizeof(struct x))

void insert();int choice();void del();void showAll();
void copyVal(struct Clubs *destination,struct Clubs *source);

void swap(){
    if(!root->next) {printf("List Empty\n");return;}
    printf("Enter two postions to swap : ");
    int p1,p2; scanf("%d %d",&p1,&p2);
    struct Clubs *cur=root->next,*club1=0,*club2=0;
    int i=0;
    while(cur && ++i){
        if(i==p1) club1=cur;
        if(i==p2) club2=cur;
        cur=cur->next;
    }
    if(!club1 || !club2) {printf("Invalid position\n");return;}

    struct Clubs *tmp=pmalloc(Clubs);    
    copyVal(tmp,club1);
    copyVal(club1,club2);
    copyVal(club2,tmp);
}

int main(){
    root=pmalloc(Clubs);
    int c,done=0;
    
    while(!done){
        c=choice();
        if(c==1) insert();
        else if(c==2) del();
        else if(c==3) showAll();
        else if(c==4) swap();
        else done=1;
    }
}

void copyVal(struct Clubs *dest,struct Clubs *source){
    strcpy(dest->name,source->name);
    dest->year=source->year;
    dest->income=source->income;
}

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
}

void del(){
    char clubName[50];
    scanf("%s\n",clubName);
    if(!root->next) {printf("List Empty\n");return;}
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
    if(!root->next) {printf("List Empty\n");return;}
    struct Clubs *cur=root->next;
    printf("--------------------\n");
    while(cur){
        printf("%s\n%d\n%d\n",cur->name,cur->year,cur->income);
        cur=cur->next;
        printf("--------------------\n");
    }    
}



int choice(){
    printf("What to you want to do?\n1.Create Club\n2.Delete Club\n3.View Club info\n4.Swap Clubs\nChoice : ");
    int c;
    scanf("%d",&c);
    return c;
}

