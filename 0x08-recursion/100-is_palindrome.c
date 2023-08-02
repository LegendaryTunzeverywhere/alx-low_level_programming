#include "main.h"

/**
 * weigh - Entry point
 * @a: index 1
 * @b: index 2
 *
 * Return: 1 if palindrome true, 0 if false.
 */
int weigh(char *a, char *b)
{
	if (a >= z)
		return (1);
	if (*a == *z)
		return (weigh(a + 1, z - 1));

	return (0);
}

/**
 * _strlen - Entry point
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - Entry point
 * @s: string to check
 * Return: 1 if palindrome, or 0 if false.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (weigh(s, (s +len - 1)));
}
