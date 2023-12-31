#include "hash_tables.h"

/**
* hash_table_delete - Entry point
* @ht: hash table to delete
*
* Description: Function to delete a hash table.
* Return: 0 ( on Success)
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *moveNode, *temp;
	unsigned long int idx;

	if (ht == NULL)
		return;

	for (idx = 0; idx < (ht->size); ++idx)
	{
		moveNode = ht->array[idx];
		while (moveNode != NULL)
		{
			temp = moveNode->next;
			if (moveNode->key != NULL)
				free(moveNode->key);
			if (moveNode->value != NULL)
				free(moveNode->value);
			if (moveNode != NULL)
				free(moveNode);
			moveNode = temp;
		}
	}
	free(ht->array);
	free(ht);
}
