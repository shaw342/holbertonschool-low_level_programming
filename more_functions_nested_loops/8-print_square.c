#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_square - Check Holberton
 *@size: an input number
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
	putchar('\n');
	}
	for (i = 0; i < size ; i++)
	{
	for (j = 0; j <  size ; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}


}
