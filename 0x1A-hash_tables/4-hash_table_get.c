#include "hash_tables.h"

/**
 * hash_table_get - Entry point
 * @ht: the hash table to look into
 * @key: key to look for in ht
 *
 * Description: a function that retrieves a value associated with a key.
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || (strcmp(key, "") == 0))
		return (NULL);
	idx = (hash_djb2((const unsigned char *)key) % (ht->size));
	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
