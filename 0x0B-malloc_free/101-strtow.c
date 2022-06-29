#include "main.h"
#include <stdlib.h>

/**
 * help_free_grid - helper function
 * @grid: 2-d array
 * @height: height of array
 *
 * Return: nothing
 */
void help_free_grid(char **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (height--; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings
 * NULL if function fails
 */
char **strtow(char *str)
{
	char **strout;
	int chr, height, len, i, j;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (chr = height = 0; str[chr] != '\0'; chr++)
	{
		if (str[chr] != ' ' && (str[chr + 1] == ' ' || str[chr + 1] == '\0'))
			height++;
	}
	strout = malloc((height + 1) * sizeof(char *));
	if (strout == NULL || height == 0)
	{
		free(strout);
		return (NULL);
	}
	for (len = j = 0; len < height; len++)
	{
		for (chr = j; str[chr] != '\0'; chr++)
		{
			if (str[chr] == ' ')
				j++;
			if (str[chr] != ' ' && (str[chr + 1] == ' ' || str[chr + 1] == '\0'))
			{
				strout[len] = malloc((chr - j + 2) * sizeof(char));
				if (strout[len] == NULL)
				{
					help_free_grid(strout, len);
					return (NULL);
				}
				break;
			}
		}
		for (i = 0; j <= chr; j++, i++)
			strout[len][i] = str[j];
		strout[len][i] = '\0';
	}
	strout[len] = NULL;
	return (strout);
}
