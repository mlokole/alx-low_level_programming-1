#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates a memory block using malloc, free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size
 * @new_size: new size of the new memory block
 *
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *dup, *alloc;

	if (ptr != NULL)
		dup = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	alloc = malloc(new_size);
	if (alloc == NULL)
		return (NULL);
	for (i = 0; i < (old_size || i < new_size); i++)
		*(alloc + i) = dup[i];
	free(ptr);

	return (alloc);
}
