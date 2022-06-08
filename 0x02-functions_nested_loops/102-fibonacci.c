#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */

int main(void)
{
	long int counter, a, b, c;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; a++)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		counter = b + c;
		b = c;
		c = counter;
	}
	return (0);
}
