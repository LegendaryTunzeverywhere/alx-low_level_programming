#include "hash_tables.h"

/**
 * hash_djb2 - Entry point
 * @str: pointer to chars a hash
 *
 * Description: a function that generates djb2 algorithm.
 * Return: hash key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int a;

	while ((a = *str++))
	hash = ((hash << 5) + hash) + a;

	return (hash);
}
