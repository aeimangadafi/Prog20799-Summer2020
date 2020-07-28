#include <stdio.h>
#include <stdlib.h>
int values[] = {90, 88, 56, 100, 2, 25};

int cmpfunc(const void *a, const void *b)
{
    //todo: implement this function

}

int main(int argc, char **argv)
{
    //todo: declare the array values and initialize it
    int values[]={11,13,7,12,16,9,24,5,10,3};
    int size = sizeof(values) / sizeof(int);
    int  i;
    printf("Before sorting the list is: \n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", values[i]);
    }
    qsort(values, size, sizeof(int), cmpfunc);
    printf("\nAfter sorting the list is: \n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", values[i]);
    }
    return 0;
}