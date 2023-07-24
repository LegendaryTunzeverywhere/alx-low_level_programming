#include "main.h"

/**
 * _strlen - Entry point
 * @s: string
 * Return: length
 */
int _strleb(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
}

/**
 * puts2 - Entry point
 *
 * Description: prints character of a string, starting with the first character
 * @str: string
 * Return: always 0
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0' && a < _strlen(str); a += 2)
		_putchar(str[i]);

	_putchar('\n');
}
