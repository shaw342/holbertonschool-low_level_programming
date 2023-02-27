#include <stdio.h>
#include "main.h"
#include <string.h>
void print_rev(char *s)
{
	int i = 0;

	while(*(s + i) != '\0')
		i++;
	{
		int j;
		for ( i = j -1; j >= 0; j--)

			printf("%c", *(s + j));
	}
	printf("\n");
}
