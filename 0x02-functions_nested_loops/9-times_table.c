#include "main.h"

/**
 * times_table - function
 *
 * Return: the 9 times table
 *
 */

void times_table(void)
{
	int x;
	int y;
	int multiply;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			multiply = x * y;

			if (multiply <= 9)
				_putchar(' ');
			else
				_putchar((multiply / 10) + '0');
			_putchar((multiply % 10) + '0');
		}
		_putchar('\n');
	}
}
