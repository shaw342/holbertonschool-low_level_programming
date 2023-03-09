#include <stdio.h>
#include "main.h"

/**
 * _memset - unction that fills memory with a constant byte.
 * @s: menory area
 * @b: constant byte
 * @n: byte of memory area
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
