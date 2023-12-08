#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry point
 * @head: pointer to the head of the list.
 * @idx: index to add new node, starts from 0.
 * @n: value of the new node.
 *
 * Description: function that inserts a new node at a given position.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int add;
	dlistint_t *temp, *new, *temp_prev;

	if (head == NULL && idx > 0)
	return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = new->next = NULL;

	if (idx == 0)
	{
		if (*head)
	{
		new->next = *head;
		(*head)->prev = new, *head = new;
	}
		else
			*head = new;
		return (new);
	}
	add = 1, temp = (*head)->next;
	while (temp)
	{
		if (idx == add)
		{
			temp->prev->next = new, new->prev = temp->prev;
			new->next = temp, temp->prev = new;
			return (new);
		}
		++add;
		temp_prev = temp;
		temp = temp->next;
	}
	if (temp == NULL && add == idx)
	{
		temp_prev->next = new, new->prev = temp_prev;
		return (new);
	}
	free(new);
	return (NULL);
}
