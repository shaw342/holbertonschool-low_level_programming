#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function
 * @b:input
 * Return: array
 */
void *malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}
