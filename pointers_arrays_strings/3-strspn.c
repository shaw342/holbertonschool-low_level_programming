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
			if (accept[l] == '\0')
			{
				return (s);
			}
		}

			
			l++;
		}

	i++;
	}
return (NULL);
}
