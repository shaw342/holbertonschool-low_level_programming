#include <stdio.h>
#include "main.h"

/**
 * *_memecpy - function
 * @dest:memory area
 * @src:from bytes memory area
 * @n:bytes
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i != n)
	{
		dest[i++] = '\0';
	}

	return (dest);



}
