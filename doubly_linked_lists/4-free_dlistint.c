#include "lists.h"
/**
 * free_dlistint - function free the liste;
 * @head: pointers
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(tmp);
		head  = tmp;

	}

}
