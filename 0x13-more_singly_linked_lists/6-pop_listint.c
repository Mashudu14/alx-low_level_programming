#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Point to the first element in the listin_t list
 *
 * Return: The head nodes data
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
