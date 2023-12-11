#include "main.h"

/**
 * _strcmp - Entry point
 *
 * Description: compare two strings
 * @s1: one string
 * @s2: another one string
 * Return: int that tells number of spaces between
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*(s1 + a) == *(s2 + a) && *(s1 + a))
		a++;

	if (*(s2 + a))
		return (*(s1 + a) - *(s2 + a));
	else
		return (0);
}
