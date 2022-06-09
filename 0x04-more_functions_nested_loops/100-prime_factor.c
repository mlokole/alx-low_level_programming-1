#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned int i = 2;
	unsigned long d = 612852475143;

	while (i != d)
	{
		if (d % i == 0)
		{
			d = d / i;
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", d);

	return (0);
}
