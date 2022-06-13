#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: string to be printed
 * Return: reversed string
 */
void print_rev(char *s)
{
	int ln = 0;

	for (ln = 0; s[ln] != '\0'; ln++)
	{
		for (ln = ln - 1; ln >= 0; ln--)
		{
			_putchar(s[ln]);
		}
	}
	_putchar('\n');
}
