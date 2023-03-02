#include <stdio.h>
#include "main.h"
char *_strchr(char *s, char c)
{
	int i = 0;

	while (c[i])
	{

	if( c[i] == s)
	{
		return (s);
		break;

	}
	i++;
	}
	

return (NULL);
}
