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

int peek(struct stack *stack, int peek_index){
    if(stack->top - peek_index + 1 < 0){
        printf("Invalid peek index\n");
        return INT_MIN;
    }
    return stack->arr[stack->top - peek_index + 1];
}

/* Story About peek
----------------------------------------------------------------
peek_index or i            top values       array_index
----------------------------------------------------------------
    1              |20 |      4               4
    2              |100|      3               3
    3              | 3 |      2               2
    4              | 4 |      1               1
    5              |_5_|      0               0
----------------------------------------------------------------
So array index in terms of peek and top values is represented as
top - i + 1

*/

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

    printf("\n\n");

    printf("Popped out %d\n", pop(st));
    printf("Popped out %d\n", pop(st));

    printf("\n");

    push(st,50);
    push(st,60);
    display_stack(st);

    printf("\n\n");

    printf("Peeking the Stack\n");
    int peek_index = 2;
    printf("Peeked at peek index %d and the value came as %d\n", peek_index, peek(st, peek_index));
    
    printf("\n");

    printf("Peeking the Stack\n");
    peek_index = 100;
    printf("Peeked at peek index %d and the value came as %d\n", peek_index, peek(st, peek_index));

    printf("\n");

    printf("Peeking all the values\n\n");

    for(int i = 1; i <= st->top + 1;i++){
        printf("Value at position %d is %d\n", i, peek(st, i));
    }
    return 0;
}