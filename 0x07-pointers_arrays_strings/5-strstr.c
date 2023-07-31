#include "main.h"
/**
 * _strstr - Entry point
 * Description: a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to loacate
 *
 * Return: pointer to the beginning of the substring,
 * or NULL, if substring is no where to be found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	while (*h)
	{
		b = needle;
		a = haystack;
		while (*b)
		{
			if (*a == *b)
			{
				b++;
				a++;
			}
			else
				break;
		}
		if (*b == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
