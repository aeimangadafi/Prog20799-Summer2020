#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node {
    int data;
    struct node *next;
} node_t;


node_t *front = NULL;
node_t *rear = NULL;

bool isEmpty() {
    return front == NULL || rear == NULL;
}





void enqueue(int value) {
    //todo: create a node and add the new value
    node_t *newNode = (node_t *) malloc(sizeof(node_t));
    if (newNode == NULL)
        printf("No more memory\n");

    newNode->data = value;
    newNode->next = NULL;
    //todo: check if the queue is empty
    if (isEmpty()) {
        front = newNode;
        rear = newNode;
    }
    else {
        rear-> next = newNode;
        rear = newNode;
    }
}


int main() {
    enqueue (10);
    enqueue (20);
    enqueue (30);
    return 0;
}