#include <stdio.h>
#include <stdlib.h>
#define unused(y) (void)(y)

/**
 * main - prints its name
 * @argc: number of command line arguments
 * @argv: array with the program command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unused(argc);
	printf("%s\n", argv[0]);
	return (0);
}
