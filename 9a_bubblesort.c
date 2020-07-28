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
    bool swapped;
    for (i = 0; i < size - 1 ; i++)
    {
        swapped = false;
        for (j = 0; j < size - 1 - i ; j++) {
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
                swapped = true;
            }
        }
        if (!swapped )
            break;
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


int generateRandomNumber(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}

int main() {

    int *a;
    int arraysize = 1000000;
    int i;

    srand(time(0));
    a = (int *) malloc(arraysize * sizeof(int));
    for (i = 0; i < arraysize; i++)
        a[i] = generateRandomNumber(0,1000);


    bubbleSort(a, arraysize);
    printArray (a, arraysize);
    return 0;
}