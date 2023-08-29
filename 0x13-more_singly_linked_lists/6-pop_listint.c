#include "lists.h"

/**
 * pop_listint - Entry point
 * @head: start of list
 *
 * Description: deletes the head of node, returns
 * the head node's data(n).
 *
 * Return: the head of node's data, if list empty
 * return (0).
 */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *place, *tmp;

	if (head == NULL)
		return (0);
	tmp = place = *head;
	if (*head)
	{
		a = place->n;
		*head = place->next;
		free(tmp);
	}
	else
		a = 0;
	return (a);
}
