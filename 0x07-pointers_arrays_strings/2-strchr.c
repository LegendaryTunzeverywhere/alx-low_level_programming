#include "main.h"
#define NULL 0

/**
 * _strchr - Entry point
 * Description: locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to a character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
