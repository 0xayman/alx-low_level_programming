#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_discriptor;
	ssize_t read_bytes;
	ssize_t write_bytes;

	if (!filename)
		return (0);

	file_discriptor = open(filename, O_RDONLY);

	if (file_discriptor < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	read_bytes = read(file_discriptor, buffer, letters);

	if (read_bytes < 0)
	{
		free(buffer);
		return (0);
	}

	buffer[read_bytes] = '\0';
	close(file_discriptor);

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (write_bytes < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);

	return (write_bytes);
}
