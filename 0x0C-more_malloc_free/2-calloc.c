#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: bytes to allocate
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	c = ptr;

	for (i = 0; i < (nmemb * size); i++)
		c[i] = '\0';

	return (ptr);
}
