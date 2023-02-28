#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	
	for(int i=0;; ++i)
	{
	if(a[i] == a[n]) break;
	printf("%d ",a[i]);
	}

}
