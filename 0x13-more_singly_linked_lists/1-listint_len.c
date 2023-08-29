#include "lists.h"

/**
 * listint_len - Entry point
 * @h: singly linked to list
 *
 * Description: Returns the number of elements
 * in a linked listint_t list
 *
 * Return: number of elements in list.
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
		h = h->next;
	return (a);
}
