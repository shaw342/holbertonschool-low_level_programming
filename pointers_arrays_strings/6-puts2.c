#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - check by holbertons
 * @str: have string
 * return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if ((i % 2) == 0)
		putchar(str[i]);
	else
		continue;
	}
	putchar('\n');
}
