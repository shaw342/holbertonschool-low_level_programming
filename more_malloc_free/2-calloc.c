#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - function
 * @size: input
 * @nmemb: input
 * Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *array;
	unsigned int l = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	l = nmemb * size;
	array = malloc(l);

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < l)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
