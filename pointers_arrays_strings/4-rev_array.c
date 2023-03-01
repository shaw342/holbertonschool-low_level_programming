#include <stdio.h>
#include "main.h"
void reverse_array(int *a, int n)
{

	int i;
	int tmp;

	for (i = 0 ; i < n-- ; i++)
	{
	tmp = a[i];
	a[i] = a[n];
	a[n] = tmp;
	}


}
