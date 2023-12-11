#include "main.h"

/**
 * _strcpy - Entry point
 *
 * Description: copies the string pointed to by source.
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a <= _strlen(src); a++)
		dest[a] = src[a];

	return (dest);
}
