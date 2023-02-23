#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int _isdigit(int c)
{	char l = (char)c;

	if(isdigit(l))
	{
	return(1);
	}
	else
	{
	return(0);
	}
	
}
