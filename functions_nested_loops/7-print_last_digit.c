#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 * @r: An input character
 * Return: always last digit
 */

int print_last_digit(int n)
{
int last;
last  = n % 10;
if (last < 0)
{
last = -1 * last;
_putchar(last + '0');
return (last);
}
_putchar(last + '0');
return (n % 10);
}
