#include "main.h"

/**
 * _strlen - Entry point
 * @str: string to check
 *
 * Description: Calculate the length of the string.
 *
 * Return: the length of the string, or -1
 * if the string is NULL.
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		len++;

	return (len);
}

/**
 * append_text_to_file - Entry point
 * @filename: file name
 * @text_content: NULL terminated string to add at the end of file.
 *
 * Description: Appends a text at the end of the file.
 *
 * Return: 1 on Success, -1 if fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t be_written = 0;
	int i;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i < 0)
		return (-1);

	if (text_content)
		be_written = write(i, text_content, _strlen(text_content));
	close(i);

	if (be_written < 0)
		return (-1);
	return (1);
}
