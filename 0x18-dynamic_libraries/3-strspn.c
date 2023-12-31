#include "main.h"
/**
 * _strspn - Entry point
 * @s: string
 * @accept: contains bytes that are probably not composed of part of the string
 *
 * Return: the number of bytes that compose the length.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int len;

	len = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0' && accept[b] != s[a]; b++)
			;
		if (s[a] == accept[b])
			len++;
		if (accept[b] == '\0')
			return (len);
	}
	return (len);
}
