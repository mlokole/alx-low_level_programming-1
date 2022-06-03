#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
		putchar(d + '0');
	putchar('\n');

	return (0);
}
