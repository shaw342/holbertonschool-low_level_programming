#include "main.h"
#include <stdio.h>
void times_table(void)
{
	int i;
	int b;
	int c;
	
	for (i = 0 ; i <= 9 ; i++)
	{
	for (b = 0 ; b <= 9 ; b++)
	{
	c = i * b ;
	_putchar(c + '0');
	
	}
	
	_putchar('\n');
	}




}
