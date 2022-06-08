#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int a;
	unsigned long int b, c, counter, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; a++)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		counter = b + c;
		b = c;
		c = counter;
	}
	printf("%lu\n", sum);

	return (0);
}
