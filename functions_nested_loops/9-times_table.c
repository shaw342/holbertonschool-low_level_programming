#include "main.h"
#include <stdio.h>
void time_table(void)
{
	int i;
	int b;
	int c;
	
	for (i = 0 ; i <= 9 ; i++)
	{
	for (b = 0 ; b <= 9 ; b++)
	{
	c = i * b ;
	putchar(c);
	
	}
	
	putchar('\n');
	}




}
