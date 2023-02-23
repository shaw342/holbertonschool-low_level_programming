#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_most_numbers - Check Holberton
 * Description: function uses _putchar function to print
 * print - the number from 0 to 9 exept number 4 and 2
 */

void  print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	if (i != 2 && i != 4)
	{
	_putchar(i  + '0');
	}
	}
	_putchar('\n');
}
