#include "main.h"

/**
 * strlen - prints length of a string
 * @s: string
 *
 * Return: length of s
 */
int strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + strlen_recursion(++s));
}
/**
 * chck_palindrome - helper function
 * @s: string
 * @n: integer
 *
 * Return: 1 if true, else 0
 */
int chck_palindrome(char *s, int n)
{
	if (n < 1)
		return (1);
	if (*s == *(s + n))
		return (chck_palindrome(s + 1, n - 2));
	return (0);
}
/**
 * is_palindrome - checks if a string is empty
 * @s: string to check
 *
 * Return: 1 if true, else 0
 */
int is_palindrome(char *s)
{
	int length = strlen_recursion(s);

	return (chck_palindrome(s, length - 1));
}
