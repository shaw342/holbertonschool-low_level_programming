#include <stdio.h>
#include "main.h"
#include <string.h>
void print_rev(char *s)
{
	int i;
	int c;

	for(i = 0;s[i]<='\0'; i++)
	for(c = i-1;c >= 0;c--)
		putchar(s[c]);


}
