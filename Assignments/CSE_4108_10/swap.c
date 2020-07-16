
void copyVal(struct Clubs *dest,struct Clubs *source){
    strcpy(dest->name,source->name);
    dest->year=source->year;
    dest->income=source->income;
    dest->player=source->player;
}

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