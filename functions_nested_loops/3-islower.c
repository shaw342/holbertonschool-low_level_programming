#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * islower.c - return (1) is lower else return (0)
 */
int _islower(int c)
{	
	char l = (char) c;

	if (islower(l))
	{
	return (0);
	}
	else 
	{
	return (1);
	}
	

}
