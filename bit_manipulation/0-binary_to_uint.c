#include "main.h"
/**
 * binary_to_uint - function
 * @b: integers
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{

			result = result << 1;
			result += (b[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;

	}
	return (result);

}
