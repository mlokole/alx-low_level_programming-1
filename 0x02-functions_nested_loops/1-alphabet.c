#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	putchar('\n');
}
