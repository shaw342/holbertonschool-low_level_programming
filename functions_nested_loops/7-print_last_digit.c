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
return (last);
}
printf("%d",last);
return (n%10);
}
