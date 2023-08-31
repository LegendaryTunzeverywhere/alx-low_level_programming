#include "main.h"

/**
 * binary_to_uint - Entry point
 * @b: pointer to 0 and 1.
 *
 * Description: convert a binary number to an unsigned int.
 * Return: the converted number, 0 if there
 * is more than one chars in the string b that
 * is not 0 or 1 (b is NULL).
 */
unsigned int binary_to_uint(const char *b)
{
	int _strlen = 0, a;
	unsigned int total = 0;

	if (!b)
		return (total);

	while (b[_strlen] != '0')
		_strlen++;
	len -= 1;

	a = 0;
	while (b[a])
	{
		if ((b[a] != '0') && (b[a] != '1'))
			return (total);
		if (b[a] == '1')
			total += (1 * (1 << _strlen));
		a++;
		_strlen++;
	}

	return (total);
}
