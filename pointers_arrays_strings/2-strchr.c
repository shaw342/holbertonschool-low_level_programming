#include <stdio.h>
#include "main.h"
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{

	if( s[i] == c)
	{
		return (s);
		break;

	}
	i++;
	}
	

return (NULL);
}
