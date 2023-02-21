#include "main.h"
#include <stdio.h>
/*
 * File: 1-alphabet.c
 * Auth: Brennan D Baraban
 */
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i;
	char j;
	for (i = 0 ; i <= 10 ; i++)
	{
	for (j = 'a' ; j <= 'z' ; j++)
	{
	putchar(j);
	}
	}
	putchar('\n');
}
