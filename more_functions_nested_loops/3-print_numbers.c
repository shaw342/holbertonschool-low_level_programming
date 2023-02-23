#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * mul - Check Holberton
 * @a: An input character
 * @b: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void  print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	_putchar(i +'0');
	}
	_putchar('\n');
}
