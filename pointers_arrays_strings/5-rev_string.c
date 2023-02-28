#include <stdio.h>
#include "main.h"
void rev_string(char *s)
{
	int i;
	int len = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	while(i!= s[len--])
	{
		
		tmp = s[i];
		s[i]=s[len];
		s[len] = tmp;
	}
}
