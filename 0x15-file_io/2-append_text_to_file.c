#include "main.h"

/**
 * append_text_to_file - A function that appends text at the
 * end of a file.
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at
 * end of file
 * Return: 1 on succeed, -1 on failure
 * or filename is NULL.
 * if text_content is NULL, return 1 if file exist,
 * and -1 if file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int file, char_length = 0, to_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if(text_content)
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
