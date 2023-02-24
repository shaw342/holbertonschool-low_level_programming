#include <stdio.h>
#include "main.h"
void print_triangle(int size)
{
	int i;
	int c;
	if (size > 0)
	{
		for (i = size ; i > 0 ; i--)
		{
			for (c = 1 ; c <= size ; c++)
			{
				if (c >= i)
				{

					_putchar('#');
				}
				else
				{	
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		
	}
	else
	{
		_putchar('\n');
	
	}

}
