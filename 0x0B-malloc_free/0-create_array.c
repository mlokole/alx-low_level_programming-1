#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of characters
 * @size: size of the array
 * @c: characters to print
 *
 * Return: pointer to the array or NULL if it fails, NULL if size is 0
 */
char *create_array(unsigned int size, char c);
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(c));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
