#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 *
 * @c: input value
 * Return: string in capital letters
 */
char *cap_string(char *c)
{
	int s;

	s = 0;
	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] = c[0] - 32;
	}
	for (s = 0; c[s] != '\0'; s++)
	{
		switch (c[s])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (c[s + 1] > 96 && c[s + 1] < 123)
				{
					c[s + 1] = c[s + 1] - 32;
				}
		}
	}
	return (c);
}
