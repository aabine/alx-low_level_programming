#include "main.h"

/**
 * custom_strlen - Custom implementation of strlen.
 * @str: String to calculate length of.
 *
 * Return: Length of the string.
 */
size_t custom_strlen(const char *str)
{
	const char *s = str;

	while (*s)
		s++;

	return (s - str);
}

/**
 * append_text_to_file - Appends text_content to the end of a file.
 * @filename: Name of the file.
 * @text_content: Text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr_stat;
	size_t len, written;

	/* Check if the filename and text content are not NULL. */
	if (filename == NULL || text_content == NULL)
		return (-1);

	/* Open the file for appending. */
	file = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0664);
	if (file == -1)
		return (-1);

	/* Get the length of the text content using strlen. */
	len = custom_strlen(text_content);

	/* Write the text content to the file. */
	written = 0;
	while (written < len)
	{
		wr_stat = write(file, text_content + written, len - written);
		if (wr_stat == -1)
		{
			close(file);
			return (-1);
		}
		written += wr_stat;
	}

	/* Close the file. */
	close(file);

	return (1);
}
