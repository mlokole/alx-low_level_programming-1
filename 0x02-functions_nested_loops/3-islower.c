#include "main.h"

/**
 * _islower - function
 *
 * @c: character to compare
 *
 * Return: 1 if lowercase, 0 if otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
