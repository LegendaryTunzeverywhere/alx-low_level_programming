#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: the number of arguments
 * Description: function that sum all its parameters
 *
 * Return: 0 if n is equal 0,
 * return sum on success.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int add;
	unsigned int a;

	if (n == 0)
		return (0);

	add = 0;
	va_start(num, n);
	for (a = 0; a < n; a++)
	{
		add = add + va_arg(num, int);
	}
	va_end(num);
	return (add);
}

