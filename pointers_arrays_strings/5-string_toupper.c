#include <stdio.h>
#include "main"
#include <ctype.h>

char *string_toupper(char *n)
{
	int i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			toupper(n[i]);
			return(n);
		}
		i++
	}
return (n);
}
