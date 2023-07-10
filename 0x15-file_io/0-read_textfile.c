#include "main.h"

/**
 * read_textfile - A function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: Name of file
 * @letters: The number of letters to read and print
 * Return: Number of letters printed, or 0 if it fails
 * or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t letter_count, rc;
	int file;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, 0_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	rc = read(file, buffer, letters);
	letter_count = write(STDOUT_FILENO, buffer, rc);

	close(file);

	free(buffer);

	return (letter_count);
}
