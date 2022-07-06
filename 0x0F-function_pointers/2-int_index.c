#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array with integers
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element for which the cmp function
 * does not return 0, -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (num = 0; num < size; num++)
	{
		if (cmp(array[num]))
			return (num);
	}
	return (-1);
}
