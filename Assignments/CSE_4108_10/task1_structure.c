struct Player{    
    char name[50];
    int age,rating,salary,position;
    struct Player *next;
};


struct Clubs{
    char name[50];
    int year,income;
    struct Clubs *next;
    struct Player *player;
}*root;