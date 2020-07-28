#include <stdio.h>
#include <stdlib.h>

/* Example program showing how to create and sort
   an array of structures */

// The type of one item in the list
typedef struct inventory_item
{
    char name[50];
    double price;
    int quantity;
} InventoryItem;

// Comparison function for sorting inventory items in increasing order by price
int cmpfunc(const void *a, const void *b)
{
    //todo: implement this function
}

int main(int argc, char **argv)
{
    // Create 4 inventory items
    InventoryItem item1 = {"LED flashlight", 11.49, 1011};
    InventoryItem item2 = {"Power bank", 8.99, 505};
    InventoryItem item3 = {"Quadcopter", 49.99, 77};
    InventoryItem item4 = {"Battery AAA NiMH", 1.29, 5000};

    // Create an array of inventory items
    InventoryItem list[] = {item1, item2, item3, item4};
    const int size = sizeof(list) / sizeof(InventoryItem); // count # items in the array
    int i;
    printf("Before sorting the list is:\n");
    for (i = 0; i < size; i++)
    {
        printf("  %s, $%.2f, quantity %d\n", list[i].name, list[i].price, list[i].quantity);
    }

    // Sort the array in increasing order by price -- see cmpfunc()
    //todo: call the qsort function

    printf("\nAfter sorting the list is: \n");
    for ( i = 0; i < size; i++)
    {
        printf("  %s, $%.2f, quantity %d\n", list[i].name, list[i].price, list[i].quantity);
    }

    return 0;
}
