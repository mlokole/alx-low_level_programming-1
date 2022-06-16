#include "main.h"

/**
 * reverse_array - function to reverse contents of an array of integers
 *
 * @a: array of integers
 * @n: number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int r;
	int swp;

	for (r = 0; r < n--; r++)
	{
		swp = a[r];
		a[r] = a[n];
		a[n] = swp;
	}
}
