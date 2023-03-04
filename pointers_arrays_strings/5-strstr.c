#include <stdio.h>
#include "main.h"
/**
 * _strstr - function
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack != '\0' ; haystack++)
	{
		char *r = haystack;
		char *l = needle;

		while (*r == *l && *l != '\0')
		{
			r++;
			l++;
		}
		if (*l == '\0')
			return (haystack);
	}
return (NULL);
}
