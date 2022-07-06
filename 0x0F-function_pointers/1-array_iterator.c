#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter in array
 * @size: size of the array
 * @action: pointer to the function being used
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int num;

	if (array == NULL && action == NULL)
		exit(98);
	for (num = 0; num < size; num++)
		action(array[num]);
}
