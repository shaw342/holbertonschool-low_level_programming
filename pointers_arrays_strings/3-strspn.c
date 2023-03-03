#include <stdio.h>
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int l;

	while (s[i] != '\0')
	{
		
		if (accept[l] == '\0')
		{
			while (accept[l])
			{
				if (s[i] == accept[l])
				{
					return (s);
				}
				l++
				
			}
		
		return (NULL);
		}

	i++;
	}
return (s);
}
