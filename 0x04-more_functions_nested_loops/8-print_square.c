#include "main.h"

/**
 * print_square - function
 *
 * @size: size of the square
 *
 * Return: new line if size is 0 or less, otherwise print square
 */

void print_square(int size)
{
	int l, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (s  = 0; s < size; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
