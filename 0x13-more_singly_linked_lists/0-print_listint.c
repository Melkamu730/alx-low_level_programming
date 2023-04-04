#include "lists.h"
/**
 * print_listint - A function print int in every position
 * @h: Structure entry
 * Return: return to the number the nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
