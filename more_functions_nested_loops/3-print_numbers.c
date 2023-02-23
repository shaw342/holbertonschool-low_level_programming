#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_numbers - Check Holberton
 * Description: function uses _putchar function to print
 * print - the number from 0 to 9
 */

void  print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	_putchar(i  + '0');
	}
	_putchar('\n');
}
