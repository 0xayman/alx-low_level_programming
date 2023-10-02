#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: file to append the text to.
 * @text_content: content to be appended to the file
 * Return: 1 if success, 0 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, wbytes, rbytes = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[rbytes])
			rbytes++;

		wbytes = write(file_descriptor, text_content, rbytes);
		if (rbytes != wbytes)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
