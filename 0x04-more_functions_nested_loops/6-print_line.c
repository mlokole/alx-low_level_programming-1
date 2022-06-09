#include "main.h"

/**
 * print_line - function that prints a line
 *
 * @n: number of times the character _ should be printed
 *
 * Return: a new line if n is 0 or less, otherwise a straight line
 */

void print_line(int n)
{
	int l;
	
	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
