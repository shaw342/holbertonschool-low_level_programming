#include "lists.h"
/**
  * list_len - function return the len of list
  * @h: input;
  * Return: lenth;
  */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
