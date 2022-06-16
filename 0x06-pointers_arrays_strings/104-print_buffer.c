#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: number of bytes from the buffer
 *
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x:", i);
			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", *(b + j));
				else
					printf(" ");
			}
			printf(" ");
			for (z = i; z < i + 10; z++)
			{
				if (z >= size)
					break;
				if (*(b + z) < 32 || *(b + z) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + z));
			}
			printf("\n");
		}
	}
}
