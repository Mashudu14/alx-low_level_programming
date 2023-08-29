#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Poinet of the link and elements
 * @index: Index of the node
 *
 * Return: A nodes that weare looking for, return null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g = 0;
	listint_t *temp = head;

	while (temp && g < index)
	{
		temp = temp->next;
		g++;
	}

	return (temp ? temp : NULL);
}
