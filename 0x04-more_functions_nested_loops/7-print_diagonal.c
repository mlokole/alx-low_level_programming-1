#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: number of times the character \ should be printed
 *
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int l, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
