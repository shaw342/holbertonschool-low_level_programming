#include <stdio.h>
#include "main.h"
#include <string.h>
char *_strcat(char *dest, char *src)
{
	int x;
	int y = 0;
	
	
	while (dest[y] != '\0')
	{
		y++;
	}
	for (x = dest[y]; src[x]!='\0';x++)
	{
	dest[y++] = src[x];
	}


	
 	return (dest);
}
