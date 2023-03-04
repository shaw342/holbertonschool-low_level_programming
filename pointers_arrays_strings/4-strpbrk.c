#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk - function
 * @s: input
 * @accept: input
 * Return: NULL or s + i
 */
char *_strpbrk(char *s, char *accept)
{
	int i
	int l


	for (i = 0; s[i]; i++)
	{
		for (l = 0; accept[l]; l++)
		{
			if (s[i] == accept)
			{
				return (s + i);
			}
		}
	}



return (NULL);
}
