#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	unsigned int num = n, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len = 0; s1[len]; len++)
		num++;

	str_concat = malloc(sizeof(char) * (num + 1));
	if (str_concat == NULL)
		return (NULL);

	num = 0;
	for (len = 0; s1[len]; len++)
		str_concat[num++] = s1[len];
	for (len = 0; s2[len] && len < n; len++)
		str_concat[num++] = s2[len];

	str_concat[num] = '\0';

	return (str_concat);
}
