#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



void swap (int *a, int *b) {
    int temp= *a;
    *a = *b;
    *b = temp;
}

void slectionsort(int array[], int size) {
    int i, j, k;
    for (i = 0; i < size - 1 ; i++)
    {
        for(j = k  = i; j < size ; j++)
        {
            if (array[j] < array[k])
                k = j;
        }
        //after the loop, k will point to the smallest element
        swap(&array[i], &array[k]);
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
    int a[]= {2,2,2,4,3};
    int size = sizeof(a)/sizeof(int);
    slectionsort(a, size);
    printArray (a, size);
    return 0;
}