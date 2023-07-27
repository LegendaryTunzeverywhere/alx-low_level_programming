#include "main.h"

/**
 * string_toupper - Entry point
 *
 * Description: capitalize all letters in string.
 * @s: string to manipulate
 * Return: string with all lettersin capital letter
 */
char *string_toupper(char *s)
{
	int a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 'a' + 'A';
	}
	return (s);
}
