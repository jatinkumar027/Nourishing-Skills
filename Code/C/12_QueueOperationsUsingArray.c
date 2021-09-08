#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

struct queue{
    int size;
    int front;
    int rear;
    int * arr;
};

bool isFull(struct queue* queue){
    if(queue->rear == queue->size - 1){
        return true;
    }
    return false;
}

bool isEmpty(struct queue* queue){
    if(queue->front == queue->rear){
        return true;
    }
    return false;
}

bool enqueue(struct queue* queue, int element){
    if(isFull(queue)){
        printf("Queue is Full!\n");
        return false;
    }
    queue->rear ++;
    queue->arr[queue->rear] = element;
    printf("Enqued element: %d\n", element);
    return true;
}

int dequeue(struct queue *queue){
    if(isEmpty(queue)){
        printf("Queue is Empty!\n");
        return INT_MIN;
    }
    queue->front++;
    int dequeued = queue->arr[queue->front];
    return dequeued;
}

void display_queue(struct queue *queue){
    while(queue->front!=queue->rear){
        printf("%d ",queue->arr[queue->front + 1]);
        queue->front++;
    }
    
}

int main()
{
    struct queue *qu;
    qu = (struct queue *)malloc(sizeof(struct queue));
    qu->size = 10;
    qu->front = -1;
    qu->rear = -1;
    qu->arr = (int *)malloc(sizeof(int)*qu->size);

    int dequeued;

    enqueue(qu,1);
    enqueue(qu,2);
    enqueue(qu,3);
    enqueue(qu,4);
    enqueue(qu,5);
    printf("Dequeuing element %d\n", dequeue(qu));
    printf("Dequeuing element %d\n", dequeue(qu));
    printf("Dequeuing element %d\n", dequeue(qu)); 
    enqueue(qu,6);
    enqueue(qu,7);
    enqueue(qu,8);
    enqueue(qu,9);
    enqueue(qu,10);
    display_queue(qu);
    return 0;
}