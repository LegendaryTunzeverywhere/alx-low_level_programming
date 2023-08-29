#include "lists.h"

/**
 * free_listint2 - Entry point
 * @head: element to set to NULL
 *
 * Description: frees a list, set the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *place;

	if (head == NULL)
		return;

	place = *head;
	while (place != NULL)
	{
		tmp = place;
		place = place->next;
		free(tmp);
	}
	*head = NULL;
}
