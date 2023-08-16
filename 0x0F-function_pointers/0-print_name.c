#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: pointer to char
 * @f: pointer to function, returns nothing.
 *
 * Description: prints a name
 * Return: nothing
 */
void print_name(char *name, void (*f) (char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
