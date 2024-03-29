#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data
 *                       of a listint_t linked list.
 * @head: Linked list
 * Return: Return of the total of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
