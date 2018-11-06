#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mergesort.h"

static int assertionCount = 0;
static int errorCount = 0;

void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++) printf("%d ", arr[i]);
		printf("\n");
}

// Compare arrays helper
int
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
testMergeSort(int* arr, int* expected_arr, int n)
{
	printArray(arr, n);
	mergeSort(arr, 0, n);
	printArray(arr, n);

	if (compareArrays(arr, expected_arr, n))
	{
		errorCount++;

	  fprintf(stderr, "\033[31m");
	  fprintf(stderr,"  (✖) Error");
	  fprintf(stderr, "\n\033[0m");
	  fprintf(stderr, "\n");
  } else
  {
    printf("\033[32m  (✓) Test passed\033[0m\n");
  }
  assertionCount++;
}

int
main()
{
	// TODO: gotta implement a shorter test
	int arr1[5] = {4, 5, 8, 1, 19};
	int expected1[5] = {1, 4, 5, 8, 19};

	int *p_arr1;
	int *p_expected1;

	p_arr1 = malloc(5*sizeof(int*));
	p_expected1 = malloc(5*sizeof(int*));

	p_arr1 = arr1;
	p_expected1 = expected1;
	testMergeSort(p_arr1, p_expected1, 5);

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
