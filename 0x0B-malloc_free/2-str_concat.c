#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: string
 * @s2: another string
 *
 * Description: concatenates two strings together
 * Return: pointer to a fres space memory or null.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	s = malloc(sizeof(char) * (a + b + 1));

	if (s == NULL)
		return (NULL);

	a = b = 0;

	while (s1[a] != '\0')
	{
		s[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		s[a] = s2[b];
		a++, b++;
	}
	s[a] = '\0';
	return (s);
}
