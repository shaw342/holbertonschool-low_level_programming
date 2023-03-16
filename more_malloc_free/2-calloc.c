#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *array;
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

	for (i = 0; i < l; i++)
	{
		array[i] = 0;
	}
	return (array);
}
