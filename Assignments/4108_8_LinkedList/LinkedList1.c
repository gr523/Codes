#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node* next;
	int value;
}*root;


void menu(){
	printf("\n");
}

void insert(int value){
	struct node *cur=root;
	struct node *tmp=(struct node*)malloc(sizeof(struct node));
	tmp->value=value;
	while(cur->next) cur=cur->next;
	cur->next=tmp;
}

void showAll(){
	struct node *cur=root;
	while(cur=cur->next) printf("%d ",cur->value);
}

void edit(int value,int del){
	int newvalue; 
	if(!del) scanf("%d",&newvalue);

	struct node *cur=root,*prev;		
	while(cur=cur->next){
		if(cur->value==value)
			break;
		prev=cur;
	}
	
	if(!cur) {
		printf("Value not found\n");
		return;
	}

	if(del){
		prev->next=cur->next;
		free(cur);
	} else {
		cur->value=newvalue;
	}
}


int main(){
	int n;
	root=(struct node*)malloc(sizeof(struct node));

/*	root->next=0;
	root->value=-1;*/

	insert(2);
	insert(10);
	insert(100);
	insert(321);
	insert(2313);
	edit(100,1);
	showAll();
}