#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function
 * @array: string
 * @size: size of string
 * @cmp: compare value
 * Return: index of array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);


	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}

	}
return (-1);
}
