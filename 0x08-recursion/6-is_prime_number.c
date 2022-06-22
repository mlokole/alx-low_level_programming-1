#include "main.h"

/**
 * chck_prime - helper function
 * @num: number to check
 * @divisor: the divisor
 *
 * Return: 0 if true, else return 1
 */
int chck_prime(int num, int divisor)
{
	if ((num % divisor) == 0)
		return (0);
	if (divisor == (num / 2))
		return (1);
	return (chck_prime(num, divisor + 1));
}
/**
 * is_prime_number - checks if number is prime number
 * @n: number to check
 *
 * Return: if true, return 1, else return 0
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (chck_prime(n, divisor));
}
