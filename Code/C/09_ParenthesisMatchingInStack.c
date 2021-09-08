// Program for parenthesis matching that is the string is balance or not
// Condition for Balanced Expression
//       - While popping Stack should not Underflow - if it happens -> Unbalanced
//       - At End of Expression, Stack should be Empty - if it not happens -> Unbalanced

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <limits.h>

struct stack{
    int size;
    int top;
    char *arr;
};

bool isEmpty(struct stack *stack){
    if(stack->top == -1){
        return true;
    }
    return false;
}

bool isFull(struct stack *stack){
    if(stack->top == stack->size - 1){
        return true;
    }
    return false;
}

void push(struct stack *stack, char element){
    if(isFull(stack)){
        printf("Stack Overflow!\n");
        return;
    }
    stack->top++;
    stack->arr[stack->top] = element;
}

char pop(struct stack *stack){
    if(isEmpty(stack)){
        printf("Stack Underflow!\n");
        return -1;
    }
    char val = stack->arr[stack->top];
    stack->top--;
    return val;
}

char * parenthesis_match(char * exp){
    struct stack *st = (struct stack * ) malloc(sizeof(struct stack));
    st->top = -1;
    st->size = sizeof(exp);
    st->arr = (char *) malloc(sizeof(st->size * sizeof(char)));
    
    for(int i = 0; exp[i] != '\0'; i++){
        if(exp[i] == '(')
            push(st, '(');
        else if(exp[i] == ')'){
            if(isEmpty(st))
            return "Unbalanced";
            pop(st);
        }
    }

    if(isEmpty(st))
        return "Balanced";
    return "Unbalanced";
}

int main()
{   
    char exp;
    scanf("%s", &exp);
    char * res = parenthesis_match(&exp);
    printf("%s", res);
    return 0;
}