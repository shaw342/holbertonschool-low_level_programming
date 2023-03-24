#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - print name
  * @array: string
  * @size: containe size of string
  * @action: pointer function
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
	{
		while (i < size)
		{
			action(array[i++]);
		}
	}
}
