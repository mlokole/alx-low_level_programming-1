#include "main.h"

/**
 * string_toupper - change lowercase string to uppercase
 *
 * @n: string
 *
 * Return: n in uppercase
 */
char *string_toupper(char *n)
{
	int s;

	s = 0;
	while (n[s] != '\0')
	{
		if (n[s] >= 'a' && n[s] <= 'z')
		{
			n[s] = n[s] - 32;
		}
		s++;
	}
	return (n);
}
