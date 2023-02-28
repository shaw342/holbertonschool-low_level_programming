#include <stdio.h>
#include "main.h"
char *_strcpy(char *dest, char *src)
{
 	int i;
	
	while (src[i] != '\0')
	{
		i++;
	}
	dest = strcpy(src[i]);

	return (dest);
}
