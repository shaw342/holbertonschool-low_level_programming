#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps values of integers.
 * @a: add value of *b
 * @b: add value of *a
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
