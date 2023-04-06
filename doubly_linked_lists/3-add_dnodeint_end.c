#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	tmp = *head;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return(*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;
	new_node->prev = tmp;
	return (*head);


}
