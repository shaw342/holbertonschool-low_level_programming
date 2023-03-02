#include <stdio.h>
#include "main.h"

/**
 * *memeset - fucntion
 * @s: pointers
 * @b: variable 
 * @n: octes
 * Return:s
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
