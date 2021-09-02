#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <limits.h>

struct stack{
    int size;
    int top;
    int * arr;
};

bool isEmpty(struct stack *stack){
    if(stack->top==-1){
        return true;
    }
    return false;
}

bool isFull(struct stack *stack){
    if(stack->top==stack->size-1){
        return true;
    }
    return false;
}

bool push(struct stack *stack, int element){
    if(isFull(stack)){
        printf("Stack Overflow, Cannot push %d\n", element);
        return false;
    }
    stack->top ++;
    stack->arr[stack->top] = element;

    return true;
}

int pop(struct stack *stack){
    if(isEmpty(stack)){
        printf("Stack Underflow\n");
        return INT_MIN;
    }
    int value = stack->arr[stack->top];
    stack->top --;
    return value;
}

void display_stack(struct stack *stack){
    int i=0;
    while(i<=stack->top){
        printf("%d ",stack->arr[i]);
        i++;
    }
}

int main()
{
    struct stack *st = (struct stack *)(malloc(sizeof(struct stack)));
    st->size = 8;
    st->top = -1;
    st->arr = (int *)(malloc(st->size * sizeof(int)));

    push(st, 1);
    push(st,2);
    push(st,3);
    push(st,4);
    push(st,5);
    display_stack(st);
    printf("\n");
    printf("Popped out %d\n", pop(st));
    printf("Popped out %d\n", pop(st));
    push(st,50);
    push(st,60);
    display_stack(st);

    return 0;
}