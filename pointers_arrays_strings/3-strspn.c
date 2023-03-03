#include <stdio.h>
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int l = 0;
	

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
				break;
			}
			l++;
		}

			

		i++;	
	}

	
	
return (NULL);
}
