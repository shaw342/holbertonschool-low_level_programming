#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{

	int i;
	

	while (i < n)
	{
	if (i != n -1 )
	{


	for (i = 0 ; i < n ;i++)
	{
		printf("%d, ", a[i]);
	}
	}
	else
	printf("%d, ",a[i]);
	}
	putchar('\n');

}
