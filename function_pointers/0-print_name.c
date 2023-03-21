#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function
 * @name: input
 * f:function
 * @name:input
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (name != NULL)
	{
		f(name);
	}

}
