#include <stdio.h>
#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int y;
	
	while (dest[i] != '\0')
	{
		i++;
	} 	
	for(y = dest[i];y < n; y++)
	{
		dest[i++] = src[y];
	}
	dest[i] = '\0';

	return (dest);
}
