#include "main.h"

/**
 * leet - Entry point
 *
 * Description: encode string into 1337 leet.
 * @s: string to manipulate
 * Return: string
 */
char *leet(char *s)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int c, d;

	for (d = 0; s[d] != '\0'; d++)
	{
		for (c = 0; s[c] != '\0'; c++)
		{
			if (s[d] == a[c])
				s[d] == b[c];
		}
	}

	return (s);
}
