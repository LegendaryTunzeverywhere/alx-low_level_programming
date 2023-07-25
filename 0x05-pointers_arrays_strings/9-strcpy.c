#include "main.h"

/**
 * _strlen - Entry point
 * @s: string to print
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

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
	 while (*src)
	 {
		 *dest = *src;
		 src++;
		 dest++;
	 }
	 return (dest);
}
