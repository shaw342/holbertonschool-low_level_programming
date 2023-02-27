#include "main.h"
#include <stdio.h>
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @*a:add value of *b
 * @*b:add value of *a
 * */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
