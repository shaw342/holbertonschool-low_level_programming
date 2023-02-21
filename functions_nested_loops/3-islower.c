#include <stdio.h>
#include "main.h"
#include <ctype.h>
int _islower(int c)
{	
	char l = (char) c;

	if (islower(l))
	{
	putchar('1');
	}
	else 
	{
	putchar('0');
	}
	return (0);

}
