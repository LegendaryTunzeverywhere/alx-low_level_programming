#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: returns length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * rev_string - Entry point
 *
 * Description: reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int x = 0;
	int y = (_strlen(s) - 1);
	char temp;

	while (x < y)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] =s[x];
		x++, y--;
	}
}
