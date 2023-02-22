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
char last;
last  = (char) n%10;
printf("%d\n",last);
return (0);
}
