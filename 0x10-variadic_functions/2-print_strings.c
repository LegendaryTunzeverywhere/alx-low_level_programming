#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry point
 * @separator: string to be printed between the strings.
 * @n: number of arguments in list
 *
 * Description: prints strings followed by a new line
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int a;
	char *p;

	va_start(string, n);
	for (a = 0; a < n; a++)
	{
		p = va_arg(string, char *);
		if (p == NULL)
			printf("(nil)");
		else
		{
			printf("%s", p);
			if (a < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}
