#include "main.h"
#include <stdio.h>
int check(int n,int i);
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (check(n,2));
}
int check(int n,int i)
{
	if (n == i)
	{
		
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check(n,i + 1));
}
