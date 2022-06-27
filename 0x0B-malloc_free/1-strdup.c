#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: duplicate string
 *
 * Return: NULL if str is NULL, NULL if memory is insufficient
 */
char *_strdup(char *str)
{
	char *strcpy;
	int i, l;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	strcpy = (char *)malloc(sizeof(char) * (i + 1));

	if (strcpy == NULL)
		return (NULL);
	for (l = 0; l <= i; l++)
		strcpy[l] = str[l];

	return (strcpy);
}
