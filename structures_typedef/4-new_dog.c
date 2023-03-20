#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpyowner;
	char *cpyname;
	dog_t *new_dog;

	if (owner == NULL && name == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	cpyname = _strdup(name);
	if (cpyname == NULL)
	{
		return (NULL);
	}
	cpyowner = _strdup(owner);

	if (cpyowner == NULL)
	{
		free(new_dog);
		free(cpyname);
		return (NULL);
	}

	new_dog->name = cpyname;
	new_dog->owner = cpyowner;
	new_dog->age = age;
	return (new_dog);


}
/**
 * _strdup - functiion
 * @str: input
 * Return: array
 */
char *_strdup(char *str)
{
	int i;
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
