#include <stdio.h>
#include "main.h"
#include <string.h>
char *_strcat(char *dest, char *src)
{
	int x;
	int y;
	int tmp;

	for (x = 0;src[x];x++)
		;
	for (y = 0;dest[y];y++)
		;
	tmp = src[x];
	src[x] = dest[y]; 
	dest[y]= tmp;
	printf("%c",dest[y]);
	printf("%c",sr[x]);
	
 	return (0);
}
