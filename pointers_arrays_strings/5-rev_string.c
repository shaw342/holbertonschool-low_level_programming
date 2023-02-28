#include <stdio.h>
#include "main.h"
void rev_string(char *s)
{
	int i;
	int len;
	char tmp;

	for ( i = 0;i!='\0';i++)
	{
	len = i/2;

	while (i != len)
	{
	tmp = len/2 -i -1;
	len/2 -i -1 = len/2 +i -1;
	len/2 +i -1 = tmp;	
	i++;

	}
	}
}
