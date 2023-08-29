#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * @head: current position in list.
 * @n: element to be added to list.
 *
 * Description: adds a new node at the end of list.
 *
 * Return: the adress of the new element, or
 * NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *place;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	place = *head;
	while (place->next != NULL)
		place = place->next;
	place->next = new;
	return (*head);
}

