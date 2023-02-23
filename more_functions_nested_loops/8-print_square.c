#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_square - Check Holberton
 *@n: an input number
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
void print_square(int size)
{
	int i;
	int j;


	for (i = 0; i <= size ; i++)
	{
	for (j = 0; j <= i ; j++)
	{
	_putchar('*');
	}
	_putchar('\n');
	}


}
