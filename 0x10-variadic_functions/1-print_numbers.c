#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * @separator: to separate betwebetween numbers
 * @n: number of arguments.
 *
 * Description: prints out numbers given.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int a;

	va_start(num, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (a < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
