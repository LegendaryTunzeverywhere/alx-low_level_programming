#include "main.h"

#define BUFFSIZE 1024

/**
 * close_file - Entry point
 * @fd: file to close
 *
 * Description: close the file descriptor an print error messae
 * upon error detected.
 *
 * Return: 0 on success, 1 on failure.
 */
int close_file(int fd)
{
	if (!close(fd))
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (-1);
}

/**
 * read_file - Entry point
 * @filename: the name of the file to read.
 * @fd: the file descriptor to check/read.
 * @buffer: the buffer to send write to.
 * @add: the number of bytes to add up and count.
 *
 * Description: read a file and print the error message as given.
 * on failure.
 *
 * Return: the number of bytes read.
 */
ssize_t read_file(const char *filename, int fd, char *buffer, size_t add)
{
	ssize_t bytes_read = read(fd, buffer, add);

	if (bytes_read > -1)
		return (bytes_read);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (-1);
}

/**
 * write_file - Entry point
 * @filename: the name of the file to write into.
 * @fd: the file descriptor.
 * @buff: the number of bytes check.
 * @add: the number of bytes to add up and write.
 *
 * Description: writes the file and print error messae on failure.
 *
 * Return: the number of bytes on Success, -1 if error was encountered.
 */
ssize_t write_file(const char *filename, int fd, const char *buff, size_t add)
{
	ssize_t bytes_to_write = write(fd, buff, add);

	if (bytes_to_write > -1)
		return (bytes_to_write);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (-1);
}

/**
 * main - Entry point
 * @argc: the argument to count
 * @argv: the argument vector to consider.
 *
 * Description: function that copies a file from one to another.
 *
 * Return: Always 1 (On success).
 */
int main(int argc, const char *argv[])
{
	int in, out;
	ssize_t bytes_read;
	char buffer[BUFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	in = open(argv[1], O_RDONLY);
	if (in < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (out < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(in);
		exit(99);
	}
	while ((bytes_read = read_file(argv[1], in, buffer, BUFFSIZE)))
	{
		if (bytes_read < 0)
		{
			close_file(in);
			close_file(out);
			exit(98);
		}
		if (write_file(argv[2], out, buffer, bytes_read) < 0)
		{
			close_file(in);
			close_file(out);
			exit(99);
		}
	}
	if ((close_file(in) | close_file(out)) < 0)
		exit(100);
	return (0);
}
