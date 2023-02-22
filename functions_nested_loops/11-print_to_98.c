#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
	int i;
	if (n >98)
	{
		for (i = n; i >= 98;i--)
		{
		if (i == 111)
		{
		printf("%d",i);
		}
		else
		{
		printf(", %d",i);
		}

		}
	}
	else if(n < 98)
	{
		for (i = n; i <= 98;i++)
		{
		if ( i == 0 || i == -111 || i == 81 || i == -91)
		{
		printf("%d",i);
		}
		else
		{
		printf(", %d",i);
		}
		}
	}
	else
	{	
		
		printf("%d",n);
		
	
	}
	printf("\n");

}
