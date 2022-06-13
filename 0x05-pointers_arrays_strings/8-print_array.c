#include "main.h"
#include <stdio.h>

/**
 * print_array - main function
 *
 * @a: pointer to array
 * @n: number of elements of the array to print
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);
		if (arr != n - 1)
			printf(", ");
	}
	printf("\n");
}
