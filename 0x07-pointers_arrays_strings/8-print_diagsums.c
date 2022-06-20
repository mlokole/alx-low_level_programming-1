#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: integer
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int n;
	int diag1 = 0;
	int diag2 = 0;

	for (n = 0; n < size; n++)
	{
		diag1 += a[(n * size) + n];
		diag2 += a[(size - 1) + ((size - 1) * n)];
	}
	printf("%d, %d\n", diag1, diag2);
}
