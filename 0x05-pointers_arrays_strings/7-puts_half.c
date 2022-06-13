#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half a string
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int a;
	int h = 0;

	if (_strlen(str) % 2 != 0)
	{
		h += 1;
	}
	for (a = (_strlen(str) + h) / 2; a < _strlen(str); a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
