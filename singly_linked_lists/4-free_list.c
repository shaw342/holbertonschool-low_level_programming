#include "lists.h"
/**
  * free_list - function that frees a list_t list
  * @head: input
  * Return: head
  */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
