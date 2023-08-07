#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: string to be copied
 *
 * Description: returns a pointer to a new allocation of space.
 * Return: pointer to array or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	a++;
	s = malloc(sizeof(*str) * a);
	if (s == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		s[b] = str[b];
		b++;
	}
	return (s);
}
