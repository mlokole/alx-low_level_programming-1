#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC

#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int print_c(va_list arg);
int print_i(va_list arg);
int print_f(va_list arg);
int print_s(va_list arg);
/**
 * struct print - struct that helps to print anything
 * @c: data type to check
 * @f: function pointer that prints a data type
 */
typedef struct print
{
	char *c;
	int (*f)(va_list arg);
} print_t;
#endif
