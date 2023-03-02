#include <stdio.h>
#include "main.h"
char *_strchr(char *s, char c)
{
	int i;

	while (s[i])
	{
		if (s[0] != c)
		{
			return (NULL);
		}
	
		i++;
	}
return (s);
}
