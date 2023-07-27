#include "main.h"

/**
 * cap_string - Entry point
 * @s: string to manipulate
 *
 * Description: capitalize first letter of each word.
 * Return: string
 */
char *cap_string(char *s)
{
	int x = 0;

	if (s[x] >= 'a' && s[x] <= 'z')
		s[x] = s[x] - 'a' + 'A';
	x++;

	while (s[x] != '\0')
	{
		if ((s[x] >= 'a' && s[x] <= 'z')
				&& (s[x - 1] == ',' || s[x - 1] == ';' || s[x - 1] == '.' ||
					s[x - 1] == '!' || s[x - 1] == '?' || s[x - 1] == '"' ||
					s[x - 1] == '(' || s[x - 1] == ')' || s[x - 1] == '{' ||
					s[x - 1] == '}' || s[x - 1] == ' ' || s[x - 1] == '\t' ||
					s[x - 1] == '\n'))
			s[x] = s[x] - 'a' + 'A';
		x++;
	}

	return (s);
}
