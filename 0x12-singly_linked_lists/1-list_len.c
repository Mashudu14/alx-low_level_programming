#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Return the numb of element in the linked list
 * @h: pointer to the list_t list
 *
 * Return: Numb of element in h
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n)
}
