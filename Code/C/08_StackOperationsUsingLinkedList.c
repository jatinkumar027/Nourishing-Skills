#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

struct StackLinkedList{
    int data;
    struct StackLinkedList *next;
};

bool isEmpty(struct StackLinkedList *top){
    if(top == NULL){
        printf("Stack Underflow\n");
        return true;
    }
    return false;
}

bool isFull(){
    struct StackLinkedList * testNode = (struct StackLinkedList *) malloc(sizeof(struct StackLinkedList));
    if(testNode == NULL){
        return true;
    }
    return false;
}

struct StackLinkedList * push(struct StackLinkedList *top, int element){
    if(isFull()){
        printf("Stack Overflow\n");
        return top;
    }
    struct StackLinkedList * newTop = (struct StackLinkedList *)malloc(sizeof(struct StackLinkedList));
    newTop->data = element;
    newTop -> next = top;
    return newTop;
}

int pop(struct StackLinkedList** top) {
    if(isEmpty(*top)){
        return INT_MIN;
    }
    struct StackLinkedList * newTop = *top;
    newTop = (*top)->next;
    int val = (*top)->data;
    *top = newTop;
    free(top);
    return val;   
}

int peek(struct StackLinkedList *top, int position) {
    struct StackLinkedList * ptr = top;
    for(int i = 0; i <position-1 && ptr!=NULL; i++) {
        ptr = ptr->next;
    }
    if(ptr!=NULL) {
        return ptr->data;
    }
    return INT_MIN;
}

void display_StackLinkedList(struct StackLinkedList * top){
    while(top!=NULL){
        printf("%d ",top->data);
        top = top->next;
    }
}

int main()
{
    struct StackLinkedList * top = NULL;
    int popped_element, peeked_element, peek_index;
    top = push(top, 5);
    top = push(top, 6);
    popped_element = pop(&top);
    // Either we can pass the address of top 
    // or we can make top as a Global variable to reflect changes anywhere
    printf("Element popped is %d\n", popped_element);
    top = push(top, 7);
    top = push(top, 8);
    top = push(top, 10);
    popped_element = pop(&top);
    printf("Element popped is %d\n", popped_element);

    peek_index = 3;
    peeked_element = peek(top,peek_index);
    peeked_element == INT_MIN ? printf("Index Not Found!\n") : printf("Element at index %d is %d\n", peek_index, peeked_element);
    
    display_StackLinkedList(top);
    return 0;
}