#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int last;
last  = n%10;
if (last < 0)
{
last = -1*last;
_putchar(last + '0');
return (last);
}
_putchar(last + '0');
return (n%10);
}
