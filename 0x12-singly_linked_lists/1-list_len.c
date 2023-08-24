#include "lists.h"

/**
 * list_len - ENtry point
 * @h: list linked
 *
 * Description: prints the length of list linked.
 * Return: number of elements in form of length.
 */
size_t list_len(const list_t *h)
{
	size_t add = 0;

	while (h != NULL)
	{
		add++;
		h = h->next;
	}

	return (add);
}
