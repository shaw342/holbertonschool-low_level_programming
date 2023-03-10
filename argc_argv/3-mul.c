#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	int nm1;
	int nm2;
	int result;

	if (argc == 3)
	{
		nm1 = atoi(argv[1]);
		nm2 = atoi(argv[2]);
		result = nm1 * nm2;
		printf("%d\n", result);
	}
	else
	{
		printf("error\n");
	}
	return (0);
}
