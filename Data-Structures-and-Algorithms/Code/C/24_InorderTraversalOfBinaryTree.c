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

void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{

    struct Node *p = create_node(4);
    struct Node *p1 = create_node(1);
    struct Node *p2 = create_node(6);
    struct Node *p3 = create_node(5);
    struct Node *p4 = create_node(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2 

    printf("In Order Travarsal\n");
    inorder(p);

    return 0;
}