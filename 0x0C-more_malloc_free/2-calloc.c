#include "main.h"
#include "0-memset.c"
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

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
