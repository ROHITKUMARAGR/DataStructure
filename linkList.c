#include <stdio.h>
#include <stdlib.h>

struct new_node {
    int data;
    struct new_node* nxt;
};


int main()
{ 
    struct new_node* head = NULL;
    struct new_node* second = NULL;


    
    struct new_node* third = NULL;

    // allocate 3 new_nodes in the heap
    head = (struct new_node*)malloc(sizeof(struct new_node));
    second = (struct new_node*)malloc(sizeof(struct new_node));
    third = (struct new_node*)malloc(sizeof(struct new_node));



    head->data = 1;
    head->nxt = second;




    second->data = 2;


    second->nxt = third;



    third->data = 3;
    third->nxt = NULL;



    return 0;
}
