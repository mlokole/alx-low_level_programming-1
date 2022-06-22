#include "main.h"

/**
 * my_sqrt - helper function
 * @square: number to get square root of
 * @num: number to test
 *
 * Return: sqrt
 */
int my_sqrt(int square, int num)
{
	if ((num * num) == square)
		return (num);
	if (num == square / 2)
		return (-1);
	return (my_sqrt(square, num + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find square root
 *
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int num = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (my_sqrt(n, num));
}
