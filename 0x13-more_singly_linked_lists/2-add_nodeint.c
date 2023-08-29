#include "lists.h"

/**
 * add_nodeint - Entry point
 * @head: current position in a list.
 * @n: int to be added into the list.
 *
 * Description: adds a new node at the beginning of a list.
 *
 * Return: the address of the new element or,
 * NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
