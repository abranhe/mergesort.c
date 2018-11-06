#include <stdio.h>
#include "mergesort.h"

void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++) printf("%d ", arr[i]);
		printf("\n");
}

int
main()
{
    int arr[] = {4, 5, 8, 1, 19};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("\nSorted array is \n");
    printArray(arr, size);
    return 0;
}
