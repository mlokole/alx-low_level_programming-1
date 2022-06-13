#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: variable string to be printed
 * Return: string, new line
 */
void _puts(char *str)
{
	int ln = 0;

	while (*(str + ln) != '\0')
	{
		_putchar(str[ln]);
		ln++;
	}
	_putchar('\n');
}
