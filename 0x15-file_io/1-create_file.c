#include "main.h"

/**
 * _strlen - check for the length of a NULL string
 * @str: string to check
 *
 * Description: calculate the length of the string.
 *
 * Return: the length of the string, it
 * -1 if string is NULL.
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		++len;

	return (len);
}

/**
 * create_file - Entry point
 * @filename: the name of the file to be created.
 * @text_content: a NULL terminating string to the content of the file (data)
 *
 * Description: creates a file with permission rw------.
 *
 * Return: 1 on Success, -1 on failure (cannot create file/write fails)
 * if filename is NULL return -1.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t be_written = 0;
	int i;
	
	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (i < 0)
		return (-1);

	if (text_content)
		be_written = write(i, text_content, _strlen(text_content));
	close(i);

	if (be_written < 0)
		return (-1);
	return (1);
}
