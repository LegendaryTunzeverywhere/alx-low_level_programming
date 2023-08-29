#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * @head: start of the list
 * @index: the idex of the node
 * @n: elements to insert in node.
 *
 * Description: inserts the node index at 0 of a linked list.
 *
 * Return: address of new node or Null if fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *place, *newNode;

	place = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (index == 0)
	{
		newNode->next = place;
		*head = newNode;
		return (*head);
	}
	while (index > 1)
	{
		place = place->next;
		index--;
		if (!place)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = place->next;
	place->next = newNode;
	return (newNode);
}
