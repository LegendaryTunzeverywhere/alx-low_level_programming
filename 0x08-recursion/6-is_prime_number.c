#include "main.h"

/**
 * is_prime - Entry point
 * @n: integer to check if prime
 * @divider: divisor
 * Return: 1 if prime, 0 if not, or a recursive function.
 */
int is_prime(int n, int divider)
{
	if (n == divider)
		return (1);
	if (n % divider == 0)
		return (0);
	return (is_prime(n, divider + 1));
}

/**
 * is_prime_number - Entry point
 * @n: num to check
 *
 * Description: check if n is a prime number
 * Return: 1 if prime or 0 if not prime.
 */
int is_prime_number(int n)
{
	int divider = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, divider));
}
