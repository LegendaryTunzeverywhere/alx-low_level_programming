#include "hash_tables.h"

/**
 * hash_table_print - Entry point
 * @ht: hash table to print
 *
 * Description: function to print a hash table
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *moveNode;
	unsigned long int idx;
	int a = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < (ht->size); ++idx)
	{
		moveNode = ht->array[idx];
		while (moveNode != NULL)
		{
			if (a > 0)
				printf(", ");

			printf("\'%s\': \'%s\'", (moveNode->key), (moveNode->value));
			moveNode = moveNode->next;
			++a;
		}
	}
	printf("}\n");
}
