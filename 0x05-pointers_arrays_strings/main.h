#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * rest_to_98 - Entry point
 * @*n: Pointer to be updated
 * Return: 0
 */

void reset_to_98(int *n);

/**
 * swap_int - Entry point
 * @*a: first value to be swapped b
 * @*b: second value to be swapped to a
 * Return: 0
 */

void swap_int(int *a, int *b);

/**
 * _strlen - Entry point
 * @*s: character to print
 * Return: 0
 */

int _strlen(char *s);

/**
 * _puts - Entry point
 * @*str: prints string
 * Return: 0
 */

void _puts(char *str);

/**
 * print_rev - Entry point
 * @*s: pointer
 * Return: 0
 */

void print_rev(char *s);

/**
 * rev_string - Entry point
 * @*s: pointer - print string in reverse
 * Return: Always 0
 */

void rev_string(char *s);

/**
 * puts2 - Entry point
 * @*str: Parameter to print
 * Return: Always 0
 */

void puts2(char *str);

/**
 * puts_half - Entry point
 * @*str: prints half of the string
 * Return: Always 0
 */

void puts_half(char *str);

/**
 * print_array - Entry point
 * @*a: Pointer
 * @n: number of elements in the array
 * Return: Always 0
 */

void print_array(int *a, int n);

#endif
