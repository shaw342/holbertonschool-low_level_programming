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
	dog_t *new_dog;

	long1 = _strlen(name);
	long2 = _strlen(owner);


	dog = malloc(sizeof(dog_t));
	cpyname = malloc((sizeof(char) * long1) + 1);

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	if (cpyname == NULL)
	{
		return (NULL);
	}
	cpyname = _strcpy(name);
	cpyowner = mallc((sizeof(char) * long2) + 1);

	if (cpyowner == NULL)
	{
		free(new_dog);
		free(cpyname);
		return (NULL);
	}
	cpyowner = _strcpy(owner);

	new_dog->name = cpyname;
	new_dog->owner = cpyowner;
	new_dog->age = age;
	return (new_dog);


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
