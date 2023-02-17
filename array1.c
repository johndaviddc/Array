#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt user for size of array
    int size = get_int("Enter size off array: ");

    // Create array of given size
    int arr[size];

    // Initialize first element to 1
    arr[0] = 1;

    // Fill array with elements that are twice the previous element
    for (int i = 1; i < size; i++)
    {
        arr[i] = 2 * arr[i-1];
    }

    // Print array element by element
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}