#include <stdio.h>
#include "main.h"
#include <string.h>
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0;src[x];x++)
		;
	_putchar(src[x]);
	for (y = 0;dest[y];y++)
		;
	_putchar(dest[y]);

	
 	return (0);
}
