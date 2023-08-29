#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list
 * At a given position
 * @head: pointer to the first node in the list
 * @idx: Index of the list where the now node should added 
 * @n: Where the adata stored
 *
 * Return: A address of the new nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int g;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (g = 0; temp && g < idx; g++)
	{
		if (g == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
