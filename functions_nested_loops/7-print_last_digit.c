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

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
printf("%d%d\n", last,last);
}
else if (last == 0)
{
printf("%d%d\n", last,last);
}
else
{
printf("%d%d\n", last,last);
}
return (0);
}
