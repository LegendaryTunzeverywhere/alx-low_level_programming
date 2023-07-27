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
	int c, d;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; d  < 10; d++)
		{
			if (s[c] == a[d])
			{
				s[c] = b[d];
			}
		}
	}

	return (s);
}
