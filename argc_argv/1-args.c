#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 * @argc: count argument
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0.
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{	
	printf("%d\n", argc - 1);
	return (0);
}
