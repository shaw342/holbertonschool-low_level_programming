#include "main.h"
#include <stdio.h>
/*
 * File: print_alphabet_x10.c
 * Auth: Barua shawan
 */
/**
 * print_alphabet_x10 - prints the alphabetx10 in lowercase,by a new line.
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
	for (j = 'a' ; j <= 'z' ; j++)
	{
	putchar(j);
	}
	putchar('\n');
	}


}
