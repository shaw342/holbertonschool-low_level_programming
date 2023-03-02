#include <stdio.h>
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int l;

	while (s[i] != '\0')
	{
		for (l = 0; accept[l] ; l++)
		{
			if(s[i] == accept[l])
			{
				return (*s);
			}
		}

	i++;
	}
return (*s);
}
