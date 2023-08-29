#include "lists.h"

/**
 * sum_listint - Entry point
 * @head: start of list
 *
 * Description: sums all elements of a linked list.
 *
 * Return: sum of the elements,
 * returns (0) if list is empty.
 */
int sum_listint(listint_t *head)
{
	int addUp;

	for (addUp = 0; head; addUp += head->n, head = head->next)
		;
	return (addUp);
}
