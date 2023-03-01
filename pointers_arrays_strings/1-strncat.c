#include <stdio.h>
#include "main.h"

/**
 * *_strncat - function
 * @dest: containe the sting
 * @src: containe the string
 * @n: containe integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int y;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (y = dest[i]; y < n && src[y] != '\0'; y++)
	{
		dest[i++] = src[y];
	}
	dest[i] = '\0';

	return (dest);
}
