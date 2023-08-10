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
	char *c;
	int a;
	unsigned int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = 0;
	while (s1[a] != '\0')
		a++;
	c = malloc(sizeof(char) * (a + n + 1));
	if (c == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		c[a] = s1[a];
		a++;
	}
	while (b < n && s2[b] != '\0')
	{
		c[a] = s2[b];
		a++, b++;
	}
	c[a] = '\0';
	return (c);
}
