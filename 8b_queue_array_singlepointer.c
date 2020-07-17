#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct queue {
    int rear;
    int size;
    int *data;
} queue_t;


queue_t *createQueue(int size) {
    queue_t *tempQueue = (queue_t *) malloc(sizeof(queue_t));
    tempQueue->size = size;
    tempQueue->rear = -1;
    tempQueue->data = (int *) malloc(size * sizeof(int));
    return tempQueue;
}

bool isFull(queue_t *queue) {
    return queue->rear == queue->size - 1;
}

bool isEmpty(queue_t *queue) {
    return queue->rear == -1;
}


void enqueue(queue_t *queue, int element) {
    if (isFull(queue)) {
        printf("the queue is full\n");
        return;
    }
    //queue = createQueue(10);
    queue->data[++queue->rear] = element;
}

int dequeue(queue_t *queue) {
    if (isEmpty(queue)) {
        printf("the queue is empty\n");
        return; // this is not really good!
    }

    int element = queue->data[0];
    //shift all the elements to the left
    int i;
    for ( i = 0; i < queue->rear; i++)
    {
        queue->data[i] = queue->data[i+1];
    }
    queue->rear--;
    return element;
}


void printQueue(queue_t *queue) {
    int i;
    for (i = 0; i <= queue->rear; i++)
    {
       printf("%d ", queue->data[i]);
    }
    printf("\n");
}


//question: method vs function


int main() {
    int queuesize = 100000;
    queue_t *myqueue = createQueue(queuesize);
    int i;
    for ( i = 0; i < queuesize; i++)
    {
        enqueue(myqueue,i);
    }
    printf("enqueue is done\n");

    for ( i = 0; i < queuesize; i++)
    {
        dequeue(myqueue);
    }

    printf("dequeue is done\n");

    // printQueue(myqueue);
    // dequeue(myqueue);
    // printQueue(myqueue);
    return 0;
}


