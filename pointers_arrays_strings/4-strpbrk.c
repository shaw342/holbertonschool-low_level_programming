#include <stdio.h>
#include "main.h"
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		
		if (*s == *accept)
		{
			return (s);
		}

		
		
	s++;
	}

	if (*accept == '\0')
	{
		return (s);
	}


return (NULL);
}
