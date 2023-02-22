#include "main.h"
#include <stdio.h>
/**
 *times_table -print the multiplication table 0 to 10
 *
 */
void times_table(void)
{
	int i;
	int b;
	int c;

	for (i = 0 ; i <= 9 ; i++)
	{
	for (b = 0 ; b <= 9 ; b++)
	{
	c = i * b;
	if (c > 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(c / 10 + '0');
	_putchar(c % 10 + '0');
	}
	else if (c == 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(c + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(c + '0');
	}
	}
	putchar('\n');
	}
}
