#include "main.h"

/**
 * print_line - function that prints a line
 *
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int l;
	
	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');
}
