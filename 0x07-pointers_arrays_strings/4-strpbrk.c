#include "main.h"
#define NULL 0

/**
 * _strpbrk - Entry point
 * Description: searching a string for any of a set of bytes
 * @s: the string
 * @accept: set of bytes
 *
 * Return: a pointer to the byte in s that matvhes one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (i = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (&s[a]);
		}
	}
	return (NULL);
}
