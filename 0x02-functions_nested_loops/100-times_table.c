#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function
 *
 * @n: the value of the times table
 *
 */

void print_times_table(int n)
{
	int x;
	int y;
	int multiply;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');

			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				multiply = x * y;

				if (multiply <= 99)
					_putchar(' ');
				if (multiply <= 9)
					_putchar(' ');

				if (multiply >= 100)
				{
					_putchar((multiply / 100) + '0');
					_putchar((multiply / 10) % 10 + '0');
				}
				else if (multiply <= 99 && multiply >= 10)
				{
					_putchar((multiply / 10) + '0');
				}
				_putchar((multiply % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
