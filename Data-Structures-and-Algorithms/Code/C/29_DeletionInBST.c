/*
Cases in Deletion
1. The node is a leaf node
        - Search the Node
        - Delete the node
2. The node is a non leaf node
        - Search the Node
        - Deleted node will be replaced with either inorder predecessor or inorder successor
3. The node is a root node/between the BST
        - Search the Node
        - Search for Ipredecessor or Isuccessor
        - Deleted node will be replaced with either inorder predecessor or inorder successor
        - If we have the option of replacing with leaf node as predecessor or successor, always replace with that
        - Keep doing this until the tree has no empty nodes
4. The Node doesn't exists
        - Keep Searching
        - return Node doesn't exists
*/

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

struct Node * inorderPredecessor(struct Node * root){
    root = root -> left;
    while(root -> right != NULL){
        root = root -> right;
    }
    return root;
}

struct Node * delete(struct Node * root, int element){
    struct Node * Ipre;
    
    if(root==NULL){
        return NULL;
    }
    if (root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }  
    
    // Search for the node to be Deleted
    if(element < root -> data){
        root->left = delete(root->left, element);
    }
    else if(element > root->data){
        root->right = delete(root->right, element);
    }
    // Deletion Strategy when the node is found
    else{
        Ipre = inorderPredecessor(root);
        root->data = Ipre->data;
        root->left = delete(root->left, Ipre->data);
    }
    return root;
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
    printf("\nDeleting the element\n");
    delete(p, 5);
    inorder(p);
    return 0;
}