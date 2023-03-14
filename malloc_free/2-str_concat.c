#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
 * *str_concat - function
 * @s1: input
 * @s2: input
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int l = 0;
	int n = 0;
	int y;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;
	for (y = 0; s2[y]; y++)
		l++;

	s = malloc((l + 1) * sizeof(char));

	if (s == 0)
	{
		return (NULL);
	}
	y = 0;
	while (n < l)
	{
		if (n <= i)
			s[n] = s1[n];
		if (n >= i)
		{
			s[n] = s2[y];
			y++;
		}
		n++;
	}
	s[n] = '\0';
	return (s);
}
