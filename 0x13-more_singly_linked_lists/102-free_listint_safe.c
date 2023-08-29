#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Point where the data are stored
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int arg;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		arg = *h - (*h)->next;
		if (arg > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
