#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 *         0 if the file can not be opened or read
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	int file_discriptor = open(filename, O_RDONLY);

	if (file_discriptor == -1)
	{
		return (0);
	}

	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	ssize_t read_bytes = read(file_discriptor, buffer, letters);

	if (read_bytes == -1)
	{
		free(buffer);
		return (0);
	}

	ssize_t write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (write_bytes == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);

	return (write_bytes);
}
