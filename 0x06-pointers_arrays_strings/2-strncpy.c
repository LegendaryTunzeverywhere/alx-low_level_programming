#include "main.h"

/**
 * _strncpy - Entry point
 *
 * Description: copies n bytes of a source into buffer.
 * @dest copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied string results.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
