#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	char l;
	char d;

	for (d = 0; d < 10; d++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
