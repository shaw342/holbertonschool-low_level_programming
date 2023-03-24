#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - function add two integer
 * @a: input
 * @b: input
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function sub two integer
 * @a: input
 * @b: input
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function multiplie two integer
 * @a: input
 * @b: input
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function divide two integer
 * @a: input
 * @b: input
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function modulo two integer
 * @a: input
 * @b: input
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
