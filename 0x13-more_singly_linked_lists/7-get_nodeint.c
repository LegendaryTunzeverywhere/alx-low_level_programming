#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @head: start of the list.
 * @index: index of node.
 *
 * Description: returns the nth node of the linked list.
 * Return: the nth node of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	a = 0;
	while (a < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		a++;
	}
	return (head);
}
