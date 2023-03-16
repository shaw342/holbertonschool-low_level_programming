#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
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

	while (i < l)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
