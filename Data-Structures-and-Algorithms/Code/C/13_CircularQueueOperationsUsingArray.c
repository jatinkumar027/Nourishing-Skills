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
    if((queue->rear + 1)%queue->size == queue->front){
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
    queue->rear = (queue->rear + 1 )%queue->size;
    queue->arr[queue->rear] = element;
    printf("Enqued element: %d\n", element);
    return true;
}

int dequeue(struct queue *queue){
    if(isEmpty(queue)){
        printf("Queue is Empty!\n");
        return INT_MIN;
    }
    queue->front = (queue->front + 1) % queue->size;
    int dequeued = queue->arr[queue->front];
    return dequeued;
}

int main()
{
    struct queue *qu;
    qu = (struct queue *)malloc(sizeof(struct queue));
    qu->size = 4;
    qu->front = 0;
    qu->rear = 0;
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
    return 0;
}