#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int size, num, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (num = 0; num < ac; num++)
	{
		for (i = 0; av[num][i] != '\0'; i++)
			size++;
	}
	size++;

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	j = 0;
	for (num = 0; num < ac; num++)
	{
		for (i = 0; av[num][i] != '\0'; i++)
		{
			str[j++] = av[num][i];
		}
		str[j++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
