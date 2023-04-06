#include "lists.h"
/*
 * get_dnodeint_at_index - function resturn the index of liste
 * @head: pointers
 * @index: unsigned int
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; head; i++)
	{
		if (i == index)
		{
			break;
		}

		head = head->next;

	}

	return (head);

}
