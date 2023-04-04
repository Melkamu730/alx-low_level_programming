#include "lists.h"
/**
 * free_listint - Write a function that frees a listint_t list
 * @head: Struct
 * Return: return to the list
 */
void free_listint(listint_t *head)
{

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		listint_t *tmp;

		tmp = head;
		free(tmp);
		head = head->next;
	}
}

