#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Entry point
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concatenate.
 *
 * Description: Concatenate two strings together.
 *
 * Return: points to a new allocated space in memmory, which contains s1
 * followed by the first n bytes of s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1 == NULL) ? 0 : strlen(s1);
	unsigned int len2 = (s2 == NULL) ? 0 : strlen(s2);
	unsigned int total_len = len1 + ((n >= len2) ? len2 : n) + 1;

	char *c = malloc(total_len);

	if (c == NULL)
		return (NULL);

	if (s1 != NULL)
		strncpy(c, s1, len1);

	if (s2 != NULL && n > 0)
		strncat(c + len1, s2, n);

	c[total_len - 1] = '\0';

	return (c);
}
