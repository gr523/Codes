#include <bits/stdc++.h>
#define ll long long 
using namespace std;

struct node{
	struct node* next;
	int value;
	node(){ value=-10;next=0; }
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
	while(cur) printf("%d ",cur->value),cur=cur->next;
}

void edit(int value,int del=0){
	int newvalue; 
	if(!del) scanf("%d",&newvalue);

	struct node *cur=root->next,*prev;		
	while(cur){
		if(cur->value==value)
			break;
		prev=cur;
		cur=cur->next;
	}
	
	if(!cur) {
		printf("Value not found\n");
		return;
	}

	if(del){
		prev->next=cur->next;
		delete cur;
	} else {
		cur->value=newvalue;
	}
}


int main(){
	freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
	int n;
	root=(struct node*)malloc(sizeof(struct node));

/*	root->next=0;
	root->value=-1;*/

	insert(2);
	insert(10);
	insert(100);
	insert(2313);
	edit(100,1);
	showAll();
}