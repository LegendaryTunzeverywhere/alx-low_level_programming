#include "main.h"

/**
 * read_textfile - Entry point
 * @filename: name of file to be accessed and read from.
 * @letters: the numbers of letters to be read and printed.
 *
 * Description: reads a text file and prints it to the
 * POSIX standard output.
 *
 * Return: if file name is NULL return 0,
 * if write fails return 0,
 * return the actual number of letters read and printed on scree.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t to_read;
	ssize_t be_written;
	int i;

	if (!(filename && letters))
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	to_read = read(i, buffer, letters);
	close(i);

	if (to_read < 0)
	{
		free(buffer);
		return (0);
	}
	if (!to_read)
		to_read = letters;

	be_written = write(STDOUT_FILENO, buffer, to_read);
	free(buffer);

	if (be_written < 0)
		return (0);

	return (be_written);
}
