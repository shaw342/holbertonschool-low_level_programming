#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 **string_toupper - function
 *@n: have string
 *Return: n
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = (int)n[i] - 32;

		}
		i++;
	}
return (n);
}
