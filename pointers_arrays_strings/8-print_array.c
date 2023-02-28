#include "main.h"
#include <stdio.h>

/**
 * print_array - check by holberton
 * @n: index number
 * @a: array
 * return: void
 */
void print_array(int *a, int n)
{

	int i = 0;
	
	while (i < n)
	{
		if (i != n - 1 )
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
			i++;

	}
	putchar('\n');

}
