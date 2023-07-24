#include "main.h"

/**
 * _strlen - Entry point
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
 * puts_half - Entry point
 *
 * Description: prints half of the string, followed by a new line.
 * @str: string
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int x;
	int len = _strlen(str);

	if (len % 2 != 0)
		x = (len / 2) + 1;
	else
		x = (len / 2);

	while (x < len)
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
