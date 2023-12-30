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
	hash_node_t *a;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (NULL);

	idx = key_idx((const unsigned char *)key, ht->size);
	a = ht->array[idx];
	
	for (; a != NULL; a = a->next)
	{
		if (strcmp(a->key, key) == 0)
			return (a->value);
	}
	return (NULL);
}
