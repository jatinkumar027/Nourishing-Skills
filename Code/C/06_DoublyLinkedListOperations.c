#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

void displayDoublyLinkedList(struct Node *head){
    struct Node *p = head;
    while(p->next!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }
    p=p->prev;
    while(p!=NULL){
        p=p->prev;
        printf("%d ", p->data);
    }
}

int main()
{   
    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    struct Node *node_second = (struct Node*) malloc(sizeof(struct Node));
    struct Node *node_third = (struct Node*) malloc(sizeof(struct Node));
    struct Node *node_fourth = (struct Node*) malloc(sizeof(struct Node));

    head->data = 1;
    head->next = node_second;
    head->prev = NULL;

    node_second->data = 2;
    node_second->next = node_third;
    node_second->prev = head;

    node_third->data = 3;
    node_third->next = node_fourth;
    node_third->prev = node_second;

    node_fourth->data = 4;
    node_fourth->next = NULL;
    node_fourth->prev = node_third;

    printf("Original Doubly Linked List\n");
    displayDoublyLinkedList(head);
    return 0;
}