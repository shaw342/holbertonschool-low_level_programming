#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function
 * @n: input
 * @i:input
 * Return: function check
 */
int check(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check(n, 2));
}
/**
 * check - function
 * @n: input
 * @i: input
 * Return: check
 */
int check(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check(n, i + 1));
}
