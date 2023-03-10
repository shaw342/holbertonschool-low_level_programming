#include <stdio.h>
#include "main.h"
/**
 * main - A program string
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
