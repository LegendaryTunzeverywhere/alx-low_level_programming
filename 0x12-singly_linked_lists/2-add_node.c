#include "lists.h"

/**
 * _strlen - Entry point
 * @str: string to acquire length.
 *
 * Description: get length of string
 * Return: length of the string.
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * add_node - Entry node
 * @head: current position in the list
 * @str: string to be added to the list
 *
 * Description: add new nodes to the list
 * Return: pointer to current place in the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	int a, len;
	char *filler;
	list_t *new_node;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new_node = *head;
	filler = malloc((len + 1) * sizeof(char));
	if (filler == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		filler[a] = str[a];
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(filler);
		return (NULL);
	}
	new_node->str = filler;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
