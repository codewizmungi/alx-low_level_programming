#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: Name of file to be created
 * @text_content: NULL terminated string to write to file created
 * Return: 1 on success, -1 on failure or if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{

	int file, char_length = 0, to_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[char_length])
			char_length++;

		to_write = write(file, text_content, char_length);

		if (to_write == -1)
			return (-1);
	}

	close(file);
	return (1);

}
