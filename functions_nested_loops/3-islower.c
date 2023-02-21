#include <stdio.h>
#include "main.h"
#include <ctype.h>
int _isalpha(int c)
{	
	char l = (char) c;

	if (islower(c))
	{
	return (1);
	}
	else 
	{
	return (0);
	}

}
