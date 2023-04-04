#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node of a listint_t
 * @head: Structures
 * Return: Return to head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *phead;
	int result;

	if (*head == NULL)
		return (0);
	result = (*head)->n;
	phead = *head;
	*head = (*head)->next;
	free(phead);
	return (result);
}
