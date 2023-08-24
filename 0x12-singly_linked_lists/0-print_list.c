#include "lists.h"

/**
 * print_list - Entry point
 * @h: linked list.
 *
 * Description: prints all elements of the list.
 * Return: number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t add = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		add++;
		h = h->next;
	}

	return (add);
}
