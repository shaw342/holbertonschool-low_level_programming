#include "main.h"
#include <stdio.h>
/**
 * print_sign - Check Holberton
 * @n: An input character
 * Return: 1 if > 0, 0 if =0, -1 if < 0
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if ( n == 0)
{
putchar('0');
return (0);
}else
{
putchar('-');
return (-1);
}
}
