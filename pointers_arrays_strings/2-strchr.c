#include <stdio.h>
#include "main.h"

/**
 * *_strchr - function
 * @s: strings
 * @c:value
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{

	if (*s == c)
	{
		return (s);

	}
	s++;
	}
	if (c == '\0')
	{
		return (s);
	}

return (NULL);
}
