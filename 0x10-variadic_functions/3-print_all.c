#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - prints a character
 * @arg: number of arguments passed
 *
 * Return: Nothing
 */
int print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
	return (0);
}

/**
 * print_i - prints an integer
 * @arg: number of arguments passed
 *
 * Return: Nothing
 */
int print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
	return (0);
}

/**
 * print_f - prints a decimal number
 * @arg: num ber of arguments passed
 *
 * Return: Nothing
 */
int print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
	return (0);
}

/**
 * print_s - prints a string
 * @arg: number of arguments passed
 *
 * Return: Nothing
 */
int print_s(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", str);
	return (0);
}

/**
 * print_all - prints anything
 * @format: a list of type of arguments passed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int a = 0, b = 0;
	char *sep1 = "";
	char *sep2 = ", ";
	va_list any_args;
	print_t func[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(any_args, format);
	while (format != NULL && format[a])
	{
		while (func[b].f != NULL)
		{
			if (format[a] == *(func[b].c))
			{
				printf("%s", sep1);
				func[b].f(any_args);
			}
			b++;
		}
		sep1 = sep2;
		a++;
	}
	printf("\n");
	va_end(any_args);
}
