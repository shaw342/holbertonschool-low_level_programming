#include <stdio.h>
#include "main.h"
void rev_string(char *s)
{
	int i;
	int len = 0;
	char tmp;

	for ( s[len] = 0; s[len] != '\0';len++)
	{
	}
	for (i = 0; i!= len;i++)
	{
		tmp = s[i];
		s[i]=s[len--];
		s[len] = tmp;
	}
}
