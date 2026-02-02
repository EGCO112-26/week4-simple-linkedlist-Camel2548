#ifndef node_h
#define node_h

struct node {
    int id;
    char name[100];
    struct node *next;
};

typedef struct node* NodePtr;

#endif