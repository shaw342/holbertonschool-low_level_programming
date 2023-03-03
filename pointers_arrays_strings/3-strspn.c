#include <stdio.h>
#include "main.h"

/**
 * _strspn - function
 * @s: variable
 * @accept: variable
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int l;

	while (s[i] != '\0')
	{
		l = 0;
		while (accept[l] != '\0')
		{
			if (s[i] == accept[l])
			{
					break;
			}
			l++;
		}
		if (accept[l] == '\0')
		{
			break;
		}

		i++;
	}
return (i);
}
