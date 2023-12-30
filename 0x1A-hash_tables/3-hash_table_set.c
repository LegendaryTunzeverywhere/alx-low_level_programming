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
	unsigned long idx, size;
	hash_node_t *new_node;
	
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	
	size = ht->size;
	idx = key_idx((const unsigned char *)key, size);
	if (ht->array[idx] != NULL && strcmp(ht->array[idx]->key, key) == 0)
	
	{
		ht->array[idx]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	
	if (new_node == NULL)
		return (0);
	
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
