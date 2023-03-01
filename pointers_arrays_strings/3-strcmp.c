#include <stdio.h>
#include "main.h"
/**
 * _strcmp - function
 * @s1:have caractere
 * @s2:have caractere
 * Return:0 or s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0' && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
		i++;
	}

return (0);
}
