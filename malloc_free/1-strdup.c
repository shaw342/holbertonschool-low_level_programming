#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - functiion
 * @str: input
 * Return: array
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *array;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i]; i++)
		;

	array = malloc((i + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] ; i++)
	array[i] = str[i];
	array[i] = '\0';
	return (array);
}
