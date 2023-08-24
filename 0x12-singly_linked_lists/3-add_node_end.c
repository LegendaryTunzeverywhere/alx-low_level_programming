#include "lists.h"

/**
 * _strlen - Entry point
 * @str: string to check for length
 *
 * Description: find string length.
 * Return: legnth of string.
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * add_node_end - Entry point
 * @head: linked lists
 * @str: data to be added to new nodes
 *
 * Description: add node to end of list_t list.
 * Return: address of new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	char *dupstr;

	if (str == NULL)
		return (NULL);

	dupstr = strdup(str);
	if (dupstr == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = dupstr;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
