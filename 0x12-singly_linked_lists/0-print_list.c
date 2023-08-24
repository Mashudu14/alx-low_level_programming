#include <stdio.h>
#include "lists.h"

/**
 * print_list- Print all the elements of a linked list
 * @h: Pointer the list_t to print
 *
 * Return: The num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		eles
			printf("[%u]%s\n", h->len, h->str);

		h = h->next;
		s++;
	}

	return (s);


}
	
