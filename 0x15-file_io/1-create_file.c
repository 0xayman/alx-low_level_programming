#include "main.h"

/**
* create_file - function that creates a file
* @filename: the name of the file to create
* @text_content: string to write to the file
* Return: 1 if success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, x, y = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_descriptor < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;

		x = write(file_descriptor, text_content, y);
		if (x != y)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
