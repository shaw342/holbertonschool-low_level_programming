#include <stdio.h>
#include "main.h"
#include <ctype.h>
int _islower(int c)
{	
	char l = (char) c;

	if (islower(l))
	{
	_putchar('1');
	}
	else 
	{
	_putchar('0');
	}
	return (0);

}
