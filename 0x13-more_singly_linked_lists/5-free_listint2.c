#include "lists.h"
/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: My struct
 * Return: 0
 */
void free_listint2(listint_t **head)
{

	if (head == NULL)
	{
		return;
	}
	while ((*head) != NULL)
	{
		listint_t *tmp;

		tmp = (*head);
		free(tmp);
		(*head) = (*head)->next;
	}
	(*head) = NULL;
}
