#include "main.h"

/**
 * _strlen - main function
 *
 * @s: variable string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
