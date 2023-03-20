#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - function
 * @d: input
 * Rturn: vois
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);

	}
	if (d->name == NULL)
	{
		d->name = "nil";
		printf("Name: %s\n", d->name);
	}
	if (d->owner == NULL)
	{
		d->owner = "nil";
		printf("Owner: %s\n", d->owner);
	}

}
