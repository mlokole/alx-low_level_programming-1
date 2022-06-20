#include "main.h"

/**
 * _memcpy - copies memory area rom src to dest
 * @dest: destination of copy
 * @src: source of copy
 * @n: bytes to be copied
 *
 * Return: poiner to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
