#include "hash_tables.h"

/**
 * key_index - Entry point
 * @key: pointer to the key
 * @size: size of table
 *
 * Description: a function that gives you the index of a key.
 * Return: index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
