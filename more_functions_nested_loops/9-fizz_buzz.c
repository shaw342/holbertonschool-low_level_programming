#include <stdio.h>
#include "main.h"
int main()
{
	int i;

	for (i = 1; i <= 100 ; i++)
	{
	if (i % 3 == 0)
	{
		printf("fizz ");
	}
	else if (i % 5 == 0)
	{
		printf("buzz ");
	}
	else if (i % 5 == 0 && i % 3 == 0)
	{
	printf("fizz buzz");
	}else
	{
	printf("%d ", i);
	}
	}

return 0;
}
