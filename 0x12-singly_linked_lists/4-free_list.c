#include "lists.h"

/**
 * free_list - Entry point
 * @head: linked list
 *
 * Description: function that frees list_t list
 * Return: nothing.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head-> next;
	}
}
