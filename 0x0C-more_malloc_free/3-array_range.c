#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of integers
 * @min:  minimum value
 * @max: max value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, num, i;

	if (min > max)
		return (NULL);

	i = max - min + 1;

	array = malloc (i * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (num = 0; num < i; num++)
		array[num] = min++;
	return (array);
}
