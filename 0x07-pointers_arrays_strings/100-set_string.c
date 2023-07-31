#include "main.h"

/**
 * set_string - Entry point
 * Description: set a pointer to char
 *
 * @s: value to set
 * @to: char to get pointer
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	*s = *to;
}
