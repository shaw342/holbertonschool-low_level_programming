#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *array;
	int l;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}
	l = nmemb * size

	for (i = 0; i < l; i++)
	{
		array[i] = 0;
	}
	return (array);
}
