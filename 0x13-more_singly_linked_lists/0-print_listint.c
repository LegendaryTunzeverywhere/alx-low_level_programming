#include "lists.h"

/**
 * print_listint - Entry point
 * @h: singly linked list to be printed
 *
 * Description: Prints all the element of listint_t list
 * Retrun: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
