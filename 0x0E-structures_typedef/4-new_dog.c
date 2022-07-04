#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function creates a new dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n, d1 = 0, d2 = 0;
	char *n1, *n2;
	dog_t *nw_dg;

	for (n = 0; name[n] != '\0'; n++)
		d1++;
	for (n = 0; owner[n] != '\0'; n++)
		d2++;

	nw_dg = malloc(sizeof(dog_t));
	if (nw_dg == NULL)
		return (NULL);

	n1 = malloc((d1 + 1) * sizeof(char));
	if (n1 == NULL)
	{
		free(nw_dg);
		return (NULL);
	}
	for (n = 0; n < d1; n++)
		n1[n] = name[n];
	n1[n] = '\0';
	nw_dg->name = n1;
	nw_dg->age = age;

	n2 = malloc((d2 + 1) * sizeof(char));
	if (n2 == NULL)
	{
		free(nw_dg);
		free(n1);
		return (NULL);
	}
	for (n = 0; n < d2; n++)
		n2[n] = owner[n];
	n2[n] = '\0';
	nw_dg->owner = n2;
	return (nw_dg);
}
