#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head: start of node.
 * @index: element to replace the deleted one.
 *
 * Description: deletes the node at index 0 from linked list.
 * Return: 1 if success, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *place, *new;

	if (!head || !*head)
		return (-1);
	place = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(place);
		return (1);
	}
	for (a = 0; a < (index - 1); a++)
	{
		place = place->next;
		if (place == NULL)
			return (-1);
	}
	new = place->next;
	place->next = new->next;
	free(new);
	return (1);
}
