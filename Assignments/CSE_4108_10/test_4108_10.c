#include <stdio.h>
#include <stdlib.h>
#define ll long long 

struct Player{
    int no;
    struct Player *next;
};

struct clubs{
    int id;
    struct Player *player;
    struct clubs *next;

    void insert(struct Player *root){
        auto cur=this->player;
        while(cur) cur=cur->next;
        cur=root;
    }
    void show(){
        auto cur=this->player;
        printf("%d\n",this->id );
        while(cur){
            printf("%d ",cur->no);
            cur=cur->next;
        }
    }

}*root;

int main(){
    root=(struct clubs*)malloc(sizeof(struct clubs));
    root->id=101;
    auto tmp=(struct Player*)malloc(sizeof(struct Player));
    tmp->no=11;
    root->player=tmp;
    auto tmp1=(struct Player*)malloc(sizeof(struct Player));
    tmp1->no=7;
    tmp1->next=0;

    tmp->next=tmp1;
    root->insert(tmp);
    root->insert(tmp1);
    root->show();
    // printf("%d\n",root->player->next->no );
}