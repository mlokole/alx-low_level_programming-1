#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 *
 */

void more_numbers(void)
{
	int i;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
