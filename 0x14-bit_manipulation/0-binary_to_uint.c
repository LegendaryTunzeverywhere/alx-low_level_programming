#include "main.h"

/**
 * binary_to_unit - Entry point.
 * @b: pointer to 0 and 1.
 *
 * Description: Converts a binary number to an unsigned int.
 * Retur: the converted nummber, 0 if there is more than one chars
 * in the string "b" that is not 0 or 1 (b is NULL).
 */
unsigned int binary_to_unit(const char *b)
{
	int a;
	unsigned int total = 0;

	if (!b)
		return (total);
	for (a = 0; b[a] != '=0'; ++a)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; ++a)
	{
		total <<= 1;
		if (b[a] == '1')
			total += 1;
	}
	return (total);
}
