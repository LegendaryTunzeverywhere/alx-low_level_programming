#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: string to check
 *
 * Description: function is meant to return length of a string.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
