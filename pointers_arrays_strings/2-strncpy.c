#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - function
 * @dest: containe the sting
 * @src: containe the string
 * @n: containe integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

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
