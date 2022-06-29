#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: always 0
 */
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
