#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * create_node(int data){
    struct Node *node = (struct Node*) malloc(sizeof(struct Node)); //creating a node pointer
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

int main()
{
    /*
    //Constructing the root node
    struct Node *p = (struct Node * )malloc(sizeof(struct Node));
    p -> left = NULL;
    p -> right = NULL;
    p->data = 2;

    //Constructing the second node
    struct Node *p1 = (struct Node * )malloc(sizeof(struct Node));
    p1 -> left = NULL;
    p1 -> right = NULL;
    p->data = 1;

    //Constructing the third node
    struct Node *p2 = (struct Node * )malloc(sizeof(struct Node));
    p2 -> left = NULL;
    p2 -> right = NULL;
    p->data = 4;

    //Linking the root node with left and right children
    p->left = p1;
    p->right = p2;

    */

    struct Node *p = create_node(2);
    struct Node *p1 = create_node(1);
    struct Node *p2 = create_node(4);

    p->left = p1;
    p->right = p2;

    return 0;
}