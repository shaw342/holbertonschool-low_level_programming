#include "lists.h"
#include <stdio.h>
/**
 * print_list - function print the single list
 * @h: pointeur
 * Return: the len
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;


	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		i++;
	}
		
	return (i);
}
