#include "main.h"

/**
 * rot13 - Entry point
 * Description: encode string using rot13
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmnNOPQRSTUVWXYZABCDEFGHIJKLM";
	int c, d;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; d < 52; d++)
		{
			if (s[c] == a[d])
			{
				s[c] = b[d];
				break;
			}
		}
	}
	return (s);
}
