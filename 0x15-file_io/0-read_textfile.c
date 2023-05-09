#include "main.h"

/**
 * read_textfile - Reads a text file and writes its contents to standard output
 * @filename: Pointer to the name of the file to read
 * @max_chars: The maximum number of characters to read from the file
 *
 * Return: The number of characters read, or -1 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t max_chars)
{
	int file, length, wrote_chars;
	char *buf;

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file for reading */
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (-1);

	/* Allocate a buffer to store the text */
	buf = malloc(sizeof(char) * (max_chars + 1));
	if (buf == NULL)
	{
		close(file);
		return (-1);
	}

	/* Read the text from the file */
	length = read(file, buf, max_chars);
	if (length == -1)
	{
		free(buf);
		close(file);
		return (-1);
	}
	buf[length] = '\0'; /* Null-terminate the buffer */

	/* Write the text to standard output */
	wrote_chars = write(STDOUT_FILENO, buf, length);
	free(buf);
	close(file);
	if (wrote_chars != length)
		return (-1);

	/* Return the number of characters read */
	return (length);
}
