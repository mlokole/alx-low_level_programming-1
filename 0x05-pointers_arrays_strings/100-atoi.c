#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - function converts a string to an integer
 *
 * @s: string to convert
 * Return: 0 if there are no numbers in the string
 */
int _atoi(char *s)
{
	int n;
	int con = 0;
	int i;
	int j = 1;
	int num = 0;

	for (n = 0; n < _strlen(s); n++)
	{
		if (!(s[n] >= '0' && s[n] <= '9') && i > 0)
		{
			break;
		}
		if (s[n] == '-')
			con--;
		if (s[n] == '+')
			con++;
		if (s[n] >= '0' && s[n] <= '9')
			i++;
	}
	while (i > 0)
	{
		num += ((s[n - 1] - '0') * j);
		n--;
		i--;
		j *= 10;
	}
	if (con >= 0)
		num *= 1;
	else
		num *= -1;
	return (num);
}
