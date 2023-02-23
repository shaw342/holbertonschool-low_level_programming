#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_diagonal - Check Holberton
 *@n: an input number
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n ; i++)
	{
	for (j = 0; j < i ; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
