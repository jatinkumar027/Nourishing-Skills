#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>

struct Node * front = NULL;
struct Node * rear = NULL;

struct Node{
    int data;
    struct Node *next;
};

void enqueue(int element){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if(newNode == NULL){
        printf("Queue is full\n");
    }
    else{
        newNode -> data = element;
        newNode -> next = NULL;

        if(front == NULL){
            front = rear = newNode;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
    }
}

int dequeue(){
    struct Node * ptr;
    int val = INT_MIN;
    if(front == NULL){
        printf("Queue is Empty\n");
    }
    else{
        ptr = front;
        front = front->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

void display_QueueLinkedList(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    printf("Dequeuing element %d\n", dequeue());
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    printf("Dequeuing element %d\n", dequeue());
    display_QueueLinkedList(front);
    return 0;
}