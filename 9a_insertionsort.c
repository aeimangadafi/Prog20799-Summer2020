#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



void swap (int *a, int *b) {
    int temp= *a;
    *a = *b;
    *b = temp;
}

void insertsort(int A[], int n)
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
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
    insertsort(a, size);
    printArray (a, size);
    return 0;
}