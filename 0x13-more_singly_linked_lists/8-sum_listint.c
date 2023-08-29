#include "lists.h"

/**
 * sum_listint - Return the sum of all data
 * @head: Data and link stored firstly
 *
 * Return: Empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
