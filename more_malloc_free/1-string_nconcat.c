#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - function
 * @s1: input
 * @s2: input
 * Return: array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int y;
	unsigned int l;

	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;
	for (i = 0; i < n && s2[i]; i++)
		l++;

	array = malloc((l * sizeof(char)) + 1);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		array[i] = s1[i];
	}

	for (y = 0; y < n && s2[y] ; y++)
	{
		array[i++] = s2[y];
	}
	array[i] = '\0';

	return (array);


}
