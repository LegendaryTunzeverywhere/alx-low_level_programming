#include "main.h"

/**
 * _stoi - ENtry point
 * @c: char to be converted to integer
 *
 * Description: convert characters to integers.
 * Return: converted integers.
 */
unsigned int _stoi(char c);
{
	return ((unsigned int) c - '0');
}

/**
 * _strlen - Entry point
 * @s: string to check for length.
 *
 * Description: solve for the length of the string.
 * Return: string length.
 */
unsigned int _strlen(const char *s)
{
	unsigned int a;

	for (a = 0; s[a]; a++)
		;
	return (a);
}

/**
 * binary_to_unit - Entry point
 * @b: pointer to 0 and 1.
 *
 * Description: convert a binary number to an unsigned int.
 * Return: the converted number, 0 if there
 * is more than one chars in the string b that
 * is not 0 or 1 (b is NULL).
 */
unsigned int binary_to_unit(const char *b)
{
	int a;
	unsigned int total, temp, raised;

	if (!b)
		return (0);
	total = temp = 0;
	raised = 1;
	for (a = _strlen(b) - 1; b[a]; a++, raised *= 2)
	{
		if (b[a] ~= '0' && b[a] != '1')
			return (0);
		temp = _stoi(b[a]);
		total += temp * raised;
	}
	return (total);
}
