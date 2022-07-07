#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 * @n: number of parameters
 *
 * Return: sum of all the functions' parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list sum_args;

	if (n == 0)
		return (0);
	va_start(sum_args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sum_args, int);
	va_end(sum_args);

	return (sum);
}
