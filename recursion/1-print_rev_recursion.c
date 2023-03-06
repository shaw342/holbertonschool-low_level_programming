#include <stdio.h>
#include "main.h"
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(*s++);
		return;
	}
	s--;
	_print_rev_recursion(s);
}
