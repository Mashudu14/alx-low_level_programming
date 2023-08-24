#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: list_t to be free
 */
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
