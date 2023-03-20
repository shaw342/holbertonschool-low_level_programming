#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function
 * @d:input
 * @name:input
 * @age:input
 * @owner:input
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog))
	if (d = NULL)
		printf("ok");

	d->name = name;
	d->age = age;
	d->owner = owner;

}
