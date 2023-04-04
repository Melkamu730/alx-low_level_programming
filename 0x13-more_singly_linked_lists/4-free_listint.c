#include "lists.h"
/**
 * free_listint - Write a function that frees a listint_t list
 * @head: Struct
 * Return: return to the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
