#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int length = sizeof(a)/sizeof(a[0]);

	for ( n = 0; n < length;n++)
	{
		printf("%d",a[n]);

	}

}
