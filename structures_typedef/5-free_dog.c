#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function
 * @d: input
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
