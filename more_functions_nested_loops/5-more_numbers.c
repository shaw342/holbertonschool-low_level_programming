#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * more_numbers - Check Holberton
 * Description: function uses _putchar function to print
 * print - the number from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
	for (j = 0; j <= 14 ; j++)
	{
	if (j > 9)
	{
	_putchar(j / 10 + '0');
	}
	_putchar(j % 10 + '0');
	}
	_putchar('\n');
	}
}
