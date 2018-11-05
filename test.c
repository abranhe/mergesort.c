#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mergesort.h"

static int assertionCount = 0;
static int errorCount = 0;

// Compare arrays helper
static int
compareArrays(int a[], int b[], int n)
{
	for (int i=0; i<n; ++i)
	{
		if (a[i] != b[i])
	  {
			return -1;
			break;
		}
  }
	return 0;
}

static void
testMergeSort(int arr[], int expected_arr[], int n)
{
	mergeSort(arr, 0, n);

	if (!compareArrays(arr, expected_arr, n))
	{
		errorCount++;

	  fprintf(stderr, "\033[31m");
	  fprintf(stderr,"  (✖) Error");
		// printf("\n  Array: ");
		// printArray(original, n);
		// printf("\n  Expected: ");
		// printArray(expected_arr, n);
		// printf("\n  Got: ");
		// printArray(arr, n);
	  fprintf(stderr, "\n\033[0m");
	  fprintf(stderr, "\n");
  } else
  {
    printf("\033[32m.\033[0m");
  }
  assertionCount++;
}

int
main()
{
	int arr[3] = {5, 0, 1};
	int expected[3] = {0, 1, 5};
	testMergeSort(arr, expected, 3);

	int arr0[7] = {7, 4, 1, 0, 3, 2, 5};
	int expected0[7] = {0, 1, 2, 3, 4, 5, 7};
	testMergeSort(arr0, expected0, 7);

	int arr1[5] = {4, 5, 8, 1, 19};
	int expected1[7] = {1, 4, 5, 8, 19};
	testMergeSort(arr1, expected1, 7);

  // Log total errors.
  printf("\n");

  if (errorCount != 0) {
    printf("\033[31m");
    printf("(✖) Failed on %d of %d assertions", errorCount, assertionCount);
    printf("\033[0m");
    printf("\n");
    exit(EXIT_FAILURE);
  }

  // Or, log total successes.
  printf("\033[32m");
  printf("(✓) Passed %d assertions without errors", assertionCount);
  printf("\033[0m");
  printf("\n");

  return 0;
}
