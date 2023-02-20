#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
int j;
for (i = 'a' ; i <= 'f' ; i++)
{
putchar(i);
}
for (j = 0 ; j <= 9 ; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
