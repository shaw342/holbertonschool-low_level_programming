#include <stdio.h>
#include "main.h"
#include <string.h>
char *_strcat(char *dest, char *src)
{
	int x;
	int y;
	

	while (src[x] != '\0')
	{
		x++;
	}
	_putchar(src[x]);
	while (dest[y] != '\0')
	{
		y++;
	}
	_putchar(dest[y]);


	
 	return (0);
}
