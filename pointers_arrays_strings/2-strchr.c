#include <stdio.h>
#include "main.h"
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{

	if(*s == c)
	{
		return (s);
		break;

	}
	i++;
	}
	if(c == '\0')
	{
		return (NULL);
	}
}
