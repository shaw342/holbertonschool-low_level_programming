#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program that adds two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	int sum = 0, i;

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	if (!atoi(argv[i]) && isalpha(argv[i]))
	{
		printf("Error\n");
		return (1);
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
