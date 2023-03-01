#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function
 * @a: array
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{

	int i;
	int tmp;

	for (i = 0 ; i < n-- ; i++)
	{
	tmp = a[i];
	a[i] = a[n];
	a[n] = tmp;
	}


}
