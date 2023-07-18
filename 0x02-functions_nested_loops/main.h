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
 * print_alphabet - print lowercase alphabet
 */


void print_alphabet(void);

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase
 * @c: the character to check
 * Return: int
 */

int _islower(int c);

/**
 * _isalpha - checks for alphabet character
 * @c: alphabet to check
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if otherwise
 */

int _isalpha(int c);

/**
 * print_sign - print sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */
int print_sign(int n);

/**
 * _abs -print absolute value of an integer
 * @int: integer
 * Return: absolute value
 */

int _abs(int);

/**
 * print_last_digit - print last digit integer
 * @int: integer
 * Return: last digit of number
 */

int print_last_digit(int);

/**
 * jack_bauer - print every minute in a day
 * Description: print 00 minute 00 seconds to 23 minute 59 seconds
 */

void jack_bauer(void);

/**
 * times_table - print multiplication table
 */

void times_table(void);

/**
 * add - add two integers togther
 * @a: initial integer
 * @b: second integer
 * Return: sum
 */

int add(int a, int b);

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n);

#endif
