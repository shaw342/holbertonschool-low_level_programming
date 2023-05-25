#include "search_algos.h"
/**
 * binary_search - function seach binary
 * @array: array
 * @size: size
 * @value: value
 * Return: mid or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		printf("Searching in array:");
		for (mid = low; mid < high; mid++)
		{
			printf("%d, ", array[mid]);
		}
		printf("%d\n", array[mid]);

		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);


}
