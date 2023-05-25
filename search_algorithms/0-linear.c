#include "search_algos.h"
/**
 * linear_search - function search
 * @array: input
 * @size: input
 * @value: value
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;


	for (i = 0; i < size ; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
