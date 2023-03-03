#include <stdio.h>
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int l = 0;

	while (s[i] != '\0')
	{
		
		while (accept[l] != '\0')
		{
		
			if (s[i] == accept[l])
			{
					return (s);
					break;
			}
			return (NULL);	
			}
			l++;
		}

	i++;
	}
return (s);
}
