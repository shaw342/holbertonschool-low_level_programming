#include <stdio.h>
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char i;


	for (i = '0'; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i != n)
	{
		dest[i++] = '\0';
	}

	return (dest);


	
}
