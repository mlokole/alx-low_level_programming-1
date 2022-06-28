#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: s1, s2, null terminated or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *strcat;
	int num, numcat = 0, strlen = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (num = 0; s1[num] || s2[num]; num++)
		strlen++;

	strcat = malloc(strlen * sizeof(char));

	if (strcat == NULL)
	{
		free(strcat);
		return (NULL);
	}
	for (num = 0; s1[num]; num++)
		strcat[numcat++] = s1[num];
	for (num = 0; s2[num]; num++)
		strcat[numcat++] = s2[num];

	return (strcat);
}
