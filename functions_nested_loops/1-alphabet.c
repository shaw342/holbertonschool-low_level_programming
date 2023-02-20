#include "main.h"
#include <stdio.h>
/*
 * File: 1-alphabet.c
 * Auth: Brennan D Baraban
 */
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
	putchar(i);
	}
	putchar('\n');
}
