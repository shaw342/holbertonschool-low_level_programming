#include <stdio.h>
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int l;

	while (s[i] != '\0')
	{
		for (l = 0; accept[l] ; l++)
		{
			if(s[i] == accept[l])
			{
				return (*s);
			}
			if (accept[l] == '\0')
			{
				return ('\0');
			}
		}

	i++;
	}
return (*s);
}
