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

void insert(struct Node* root, int element){
    struct Node * prev = NULL;

    while(root!=NULL){
        prev = root;
        if(root->data == element){
            printf("Cannot Insert duplicate element\n");
            return;
        }
        else if(root->data > element){
            root = root -> left;
        }
        else{
            root = root -> right;
        }
    }

    struct Node * newNode = create_node(element);
    if(element < prev->data){
        prev -> left = newNode;
    }
    else{
        prev -> right = newNode;
    }
    printf("Element Inserted successfully\n");
}

struct Node * search(struct Node * root, int element){
    if(root==NULL){
        return NULL;
    }
    if(root->data==element){
        return root;
    }
    else if(root->data > element){
        return search(root->left, element);
    }
    else{
        return search(root->right, element);
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
    insert(p, 2);
    inorder(p);
    return 0;
}

// Binary Search Tree Properties
