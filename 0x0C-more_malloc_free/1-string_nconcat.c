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
	unsigned int len1 = 0, len2 = 0, total_len;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 =  strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	total_len = len1 + n + 1;

	c = malloc(total_len);
	if (c == NULL)
		return (NULL);

	strncpy (c, s1, len1);
	strncat(c, s2, n);
	c[total_len - 1] = '\0';

	return (c);
}
