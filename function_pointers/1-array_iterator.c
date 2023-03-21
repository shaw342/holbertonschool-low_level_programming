#include <stdio.h>
#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		action(size);
	}
}
