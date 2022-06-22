#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to print
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = _strlen_recursion(s + 1);
		return (length += 1);
	}
	return (0);
}
