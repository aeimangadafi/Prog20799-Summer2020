#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot && i < h);

        do
        {
            j--;
        } while (A[j] > pivot && i >= l);

        if (i < j)
            swap(&A[i], &A[j]);
    } while (i < j);

    swap(&A[l], &A[j]);
    return j;
}

void QuickSort(int A[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j + 1, h);
    }
}


int generateRandomNumber(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}

int main()
{
    srand(time(0));
    int *A, n = 10, i;
    A = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        A[i] = generateRandomNumber(0,1022);
    QuickSort(A, 0, n);
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}