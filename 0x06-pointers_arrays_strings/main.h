#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * _strncat - Entry point
 * @dest: string to be appended to
 * @src: sring to append
 * Return: concatenated string result
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - Entry point
 * @dest: string to be appended to
 * @src: string to append
 * @n: appened n number of bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncat - Entry point
 * @dest: copy source to this buffer
 * @src: source to copy
 * @n: n bytes to copy
 * Return: copied string result
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - Entry point
 * @s1: string 1
 * @s2: string 2
 * Return: int tells the number of spaces between both strings
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - Entry point
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - Entry point
 * @s: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *);

/**
 * cap_string - Entry point
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s);

/**
 * rot13 - Entry point
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s);

/**
 * leet - Entry point
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
