#include <stdio.h>
#include "main.h"
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s2[i] != '\0' && s1[i] != '\0')
	{	
		if (s1[i] != s2[i])
		{

		
		return (s1[i] - s2[i]);
		}
		else
		{
			return(0);
		}
		i++;
	}
}
