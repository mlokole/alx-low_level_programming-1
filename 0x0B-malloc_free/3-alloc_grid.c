#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a 2-d array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL on failure and if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int wide, tall;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (tall = 0; tall < height; tall++)
	{
		array[tall] = malloc(width * sizeof(int));
		if (array[tall] == NULL)
		{
			for (tall--; tall >= 0; tall--)
				free(array[tall]);
			free(array);
			return (NULL);
		}
	}
	for (tall = 0; tall < height; tall++)
	{
		for (wide = 0; wide < width; wide++)
			array[tall][wide] = 0;
	}
	return (array);
}
