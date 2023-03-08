#include "main.h"
#include <math.h>
/**
 * _pow_recursion - function
 * @x:input
 * @y:input
 * Return:x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
	return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
