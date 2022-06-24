#include <stdio.h>
#include <stdlib.h>
#define unused(y) (void)(y)
/**
 * main - function
 * @argc: number of command line arguments
 * @argv: array with arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unused(argv);
	printf("%d\n", argc - 1);
	return (0);
}
