#include <stdio.h>
#include "main.h"
void rev_string(char *s)
{
	int i =	0;
	int len = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	while(i < len--)
	{
		
		tmp = s[i];
		s[i++]=s[len];
		s[len] = tmp;
		
	}
}
