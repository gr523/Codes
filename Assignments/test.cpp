#include <stdio.h>
#include <stdlib.h>
struct student{
	char name[20];
	int id;
}*s;
int i=0;
int ss=sizeof(struct student);
void add(){
	s=(struct student*)realloc(s,sizeof(struct student*));
	scanf("%s %d",(s+i)->name,&(s+i)->id);
	i++;
}

void show(){
	for(int k=0;k<i;k++){
		printf("Name : %s\nid : %d\n",(s+k)->name,(s+k)->id);
	}
}

int main(){
	s=(struct student*)calloc(1,ss);
	freopen("Input.txt","r",stdin);
	int t;t=6;
	while(t--){
		add();
	}
	show();
}


