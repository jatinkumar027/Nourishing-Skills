#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool isBST(struct Node * root){
    static struct Node * prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return false;
        }
        if(prev!=NULL && root->data <= prev->data){
            return false;
        }
        prev = root;
        return isBST(root -> right);
    }
    else{
        return true;
    }
}

int main()
{

    struct Node *p = create_node(5);
    struct Node *p1 = create_node(3);
    struct Node *p2 = create_node(6);
    struct Node *p3 = create_node(1);
    struct Node *p4 = create_node(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4 

    printf("In Order Travarsal\n");
    inorder(p);
    printf("\n");
    printf(isBST(p) ? "YES" : "NO");
    return 0;
}

// Binary Search Tree Properties
