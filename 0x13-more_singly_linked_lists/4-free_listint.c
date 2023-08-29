#include "lists.h"

/**
 * free_listint - Entry point
 * @head: element
 *
 * Description: frees list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
