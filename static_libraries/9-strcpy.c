#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - check holberton
 * @dest: have strings
 * @src:have strings
 * Return:void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
