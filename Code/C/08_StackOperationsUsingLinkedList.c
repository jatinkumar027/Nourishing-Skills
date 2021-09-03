#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct StackLinkedList{
    int data;
    struct StackLinkedList *next;
};

bool isEmpty(struct StackLinkedList *stack){
    if(stack == NULL){
        return true;
    }
    return false;
}

struct StackLinkedList * push(struct StackLinkedList *stack, int element){
    struct StackLinkedList * newTop = (struct StackLinkedList *)malloc(sizeof(struct StackLinkedList));
    newTop->data = element;
    newTop -> next = stack;
    return newTop;
}

struct StackLinkedList * pop(struct StackLinkedList * stack) {
    struct StackLinkedList * newTop = stack;
    newTop = stack->next;
    free(stack);
    return newTop;
}

void display_StackLinkedList(struct StackLinkedList * stack){
    while(stack!=NULL){
        printf("%d ",stack->data);
        stack = stack->next;
    }
}

int main()
{
    struct StackLinkedList * top, *second, *third, *fourth;
    top = (struct StackLinkedList *)malloc(sizeof(struct StackLinkedList));
    second = (struct StackLinkedList *)malloc(sizeof(struct StackLinkedList));
    third = (struct StackLinkedList *)malloc(sizeof(struct StackLinkedList));
    fourth = (struct StackLinkedList *)malloc(sizeof(struct StackLinkedList));

    fourth->data = 4;
    fourth->next = NULL;

    third->data = 3;
    third->next = fourth;

    second->data = 2;
    second->next = third;

    top->data = 1;
    top->next = second;

    top = push(top, 5);
    top = push(top, 6);
    top = pop(top);

    display_StackLinkedList(top);
    return 0;
}