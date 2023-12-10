#include "lists.h"

/**
 * free_dlistint - Free the dlistint_t.
 * @head: Pointer to head of the list
 * Return: Nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
