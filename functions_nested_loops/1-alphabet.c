#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for(i = 'a' ; i <= 'z' ; i++)
	{
	putchar(i);
	}
	putchar('\n');
}
