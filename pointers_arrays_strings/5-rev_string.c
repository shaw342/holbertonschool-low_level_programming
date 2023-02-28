#include <stdio.h>
#include "main.h"

/**
 * rev_string - check by holberton
 * @s: strings
 * Return: nothing
 *
 */

void rev_string(char *s)
{
	int i =	0;
	int len = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len--)
	{		
		tmp = s[i];
		s[i++] = s[len];
		s[len] = tmp;
	}
}
