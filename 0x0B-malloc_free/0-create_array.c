#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: size of the given array.
 * @c: char to be int
 *
 * Description: creates an array of chars, and int it with char.
 * Retrun: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	if =(size == 0)
		return (NULL);
	str = mslloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < size)
	{
		str[a] = c;
		a++
	}
	return (str);
}
