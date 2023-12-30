#include "hash_tables.h"

/**
 * hash_table_set - Entry point
 * @ht: pointer of the hash
 * @key: pointer to the key
 * @value: value to be added
 *
 * Description: a function that adds an element to the hash table.
 * Return: 1 on Success, 0 if failed.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *temp;
	unsigned long int idx;

	if (ht == NULL)
		return (0);
	idx = (hash_djb2((const unsigned char *)key) % (ht->size));
	if (key == NULL || value == NULL || (strcmp(key, "") == 0))
		return (0);
	if (ht->array[idx] == NULL)
	{
		newNode = malloc(sizeof(hash_node_t));
		if (newNode == NULL)
			return (0);
		ht->array[idx] = newNode;
		newNode->key = (strdup(key));
		newNode->value = (strdup(value));
		newNode->next = NULL;
		return (1);
	}
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = (strdup(value));
			return (1);
		}
		temp = temp->next;
	}
	temp = ht->array[idx];
	while (temp)
	{
		newNode = malloc(sizeof(hash_node_t));
		if (newNode == NULL)
			return (0);
		ht->array[idx] = newNode;
		newNode->key = (strdup(key));
		newNode->value = (strdup(value));
		newNode->next = temp, ht->array[idx] = newNode;
		return (1);
	}
	return (0);
}
