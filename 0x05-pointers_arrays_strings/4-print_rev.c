#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: string to be printed
 * Return: reversed string
 */
void print_rev(char *s)
{
	int l;

	for (l = _strlen(s) - 1; l >= 0; l--)
	{
		_putchar(*(s + l));
	}
	_putchar('\n');
}
