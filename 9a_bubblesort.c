#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



void swap (int *a, int *b) {
    int temp= *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int array[], int size) {
    int i, j;
    for (i = 0; i < size - 1 ; i++)
    {
        for (j = 0; j < size - 1 - i ; j++) {
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }

    }


}

void printArray(int array[], int size) {
    int i=0;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int a[]= {10,44,2,4,14,3,5,1,5,90};
    int size = sizeof(a)/sizeof(int);
    bubbleSort(a, size);
    printArray (a, size);
    return 0;
}