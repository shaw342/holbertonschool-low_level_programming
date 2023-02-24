#include <stdio.h>
#include "main.h"
int main()
{
	int i;
	char n;
	char r;
	char o;
	for (i = 0; i <= 100 ; i++)
	{
	if (i % 3 == 0)
	{
		for (n = 'a'; n <= 'z' ; n++){
		if (n == 'z' && n == 'f' && n == 'i')
		{
		_putchar(n)
		}
		}
	}
	else if (i % 5 == 0)
	{
		for (r = 'a'; r <= 'z' ; r++){

		if ( r == 'b' && r == 'u' && r == 'z')
		{
		_putchar(r)
		}
		}
	}
	else
	{
	_putchar('n');
	}
	}

return 0;
}
