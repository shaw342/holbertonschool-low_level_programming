#include <stdio.h>
#include "main.h"
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
