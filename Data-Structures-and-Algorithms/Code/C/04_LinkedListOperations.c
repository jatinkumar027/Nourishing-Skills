#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* insert_at_beginning(struct Node *ptr, struct Node *insert_node){
    insert_node->next = ptr;
    ptr = insert_node;
    return insert_node;
}

struct Node *insert_at_end(struct Node *ptr, struct Node *insert_node){
    struct Node *p = ptr;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = insert_node;
    insert_node->next = NULL;
    return ptr;
}

struct Node* insert_in_between(struct Node *ptr, int element, int index){

    struct Node * node_in_between = (struct Node*) malloc(sizeof(struct Node));
    struct Node *p =ptr;
    int i = 0;

    while(i!=index-1){
        p = p->next;
        i++;
    }

    node_in_between->data = element;
    node_in_between -> next = p->next;
    p->next = node_in_between;

    return ptr;
}

struct Node * insert_after_node(struct Node *ptr, int element, struct Node *prevNode){

    struct Node * node_after_node = (struct Node*) malloc(sizeof(struct Node));
    node_after_node->data = element;
    node_after_node->next = prevNode->next;
    prevNode->next = node_after_node;
    return ptr; 
}

struct Node * delete_at_beginning(struct Node *ptr){
    struct Node * p = ptr;
    p = p->next;
    free(ptr);
    return p;
}

struct Node * delete_at_end(struct Node *ptr){
    struct Node * p = ptr;
    while(p->next -> next != NULL){
        p = p->next;
    }
    free(p->next->next);
    p->next = NULL;
    return ptr;
}

struct Node * delete_in_between(struct Node *ptr, int index){
    int i = 0;
    struct Node *p = ptr;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    int my = p->data; 
    struct Node *node_to_delete = p->next;
    p->next = node_to_delete->next;
    free(node_to_delete);
    return ptr;
}

struct Node * delete_value_node(struct Node *ptr, int element){
    struct Node * p = ptr;
    while(p->next->data != element){
        p = p->next;
    }
    if(p->next->data == element){
    struct Node *node_to_delete = p->next;
    p->next = node_to_delete -> next;
    free(node_to_delete);
    return ptr;
    }
}

void display_LinkedList(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
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

    node_second->data = 2;
    node_second->next = node_third;

    node_third->data = 3;
    node_third->next = node_fourth;

    node_fourth->data = 4;
    node_fourth->next = NULL;

    printf("Original Linked List\n");
    display_LinkedList(head);
    printf("\n");

    struct Node *node_at_beginning = (struct Node*) malloc(sizeof(struct Node));
    node_at_beginning->data = 10;
    head = insert_at_beginning(head,node_at_beginning);
    printf("Insert at beginning of Linked List\n");
    display_LinkedList(head);
    printf("\n");

    struct Node *node_at_end = (struct Node*) malloc(sizeof(struct Node));
    node_at_end->data = 20;
    insert_at_end(head,node_at_end);
    printf("Insert at end of Linked List\n");
    display_LinkedList(head);
    printf("\n");

    insert_in_between(head,66, 2);
    printf("Insert in between by index of Linked List\n");
    display_LinkedList(head);
    printf("\n");

    insert_after_node(head,100, node_fourth);
    printf("Insert after a node in Linked List\n");
    display_LinkedList(head);
    printf("\n");

    head = delete_at_beginning(head);
    printf("Delete from beginning of Linked List\n");
    display_LinkedList(head);
    printf("\n");

    head = delete_at_end(head);
    printf("Delete from end of Linked List\n");
    display_LinkedList(head);
    printf("\n");

    delete_in_between(head, 1);
    printf("Delete in between of Linked List\n");
    display_LinkedList(head);
    printf("\n");

    delete_value_node(head, 55);
    printf("Delete a given element from the Linked List\n");
    display_LinkedList(head);
    printf("\n");

    

    return 0;
}