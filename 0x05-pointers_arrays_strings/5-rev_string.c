#include "main.h"
# include "2-strlen.c"
/**
 * rev_string - function reverses a string
 *
 * @s: string to be reversed
 * Return: reversed string
 */
void rev_string(char *s)
{
	int l;
	char r;

	for (l = 0; l < _strlen(s) / 2; l++)
	{
		r = s[l];
		s[l] = s[_strlen(s) - l - 1];
		s[_strlen(s) - l - 1] = r;
	}
}
