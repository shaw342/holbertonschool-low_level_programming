#include <stdio.h>
#include "dog.h"
int _sterlen(char *s);
char _strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner)
{
	int long1;
	int long2;
	char *cpyowner;
	char *cpyname;

	long1 = _strlen(name);
	long2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	dog->name = malloc((sizeof(char) * long1) + 1);

	if (dog == NULL)
	{
		exit(-1);
	}


	if (dog->name == NULL)
	{
		exit(0);

	}

}
int _sterlen(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}
	return (i);
}
char _strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);

}
