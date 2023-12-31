#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Reurn the num of elements in linked list
 * @h: Pointer the list_t
 *
 * Return: Num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
