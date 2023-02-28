#include <stdio.h>
#include "main.h"
void puts_half(char *str)
{
	int i=0;
	int j;
	int leng;

	while (str[i] != '\0')
	{	
	
	i++;	
	}
	leng = i/2;
	for(j = leng; str[j] != '\0';j++)
	{
			putchar(str[j]);
	}
	putchar('\n');
}
