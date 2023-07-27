#include "main.h"

/**
 * _strncat - Entry point
 *
 * Description: concatenate two strings
 * @ dest: string to be appended to
 * @src: string to appened
 * @n: append n number of bytes
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != src[n])
	{
		dest[a] = src [b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
