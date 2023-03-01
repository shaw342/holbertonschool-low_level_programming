#include <stdio.h>
#include "main.h"
char *leet(char *str)
{
	int i = 0;
	int s;
	char r[] = "aAeEoOtTlL";
	char m[] = "4433007711";


	while (str[i])
	{
		for (s = 0 ; r[s] ;s++)
		{
			if (str[i] == r[s])
			{
				r[s] = m[s];
			}
		}
	i++;	
	}
	
return (str);
}
