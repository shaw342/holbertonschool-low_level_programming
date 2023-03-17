#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - function
 * @min: input
 * @max: input
 * Return: arra
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(abs(max - min) * sizeof(int) + sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		array[i] += i;

	}
	return (array);
}
