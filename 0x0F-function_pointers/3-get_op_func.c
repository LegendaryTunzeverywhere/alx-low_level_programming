#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Entry point
 * @s: operators (+, -, *, /, %)
 *
 * Description: function to pick correct operator function to execute.
 * Return: pointer to correct operator function.
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
