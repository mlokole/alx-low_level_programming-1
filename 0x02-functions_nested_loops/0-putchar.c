#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c[] = "_putchar";
	int n;

	for (n = 0; n <= 8; n++)
	{
		putchar(c[n]);
	}

	putchar('\n');

	return (0);
}
