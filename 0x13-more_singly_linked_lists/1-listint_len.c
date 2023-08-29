#include "lists.h"

/**
 * listint_len - Returns the number of elements in linked listint_t lists
 * @h: Type of linked listint_t to traverse
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
