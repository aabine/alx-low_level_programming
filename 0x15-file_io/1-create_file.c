#include "main.h"

/** * create_file - creates a file with the given text content
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 *
 * Return: 1 if the file was created successfully with content,
 *         0 if the file was created successfully but with no content,
 *        -1 if there was an error creating the file or writing to it
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, len, wr_stat;

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file for writing */
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (new_file == -1)
		return (-1);

	/* Check if the text content is NULL */
	if (text_content == NULL)
	{
		close(new_file);
		return (0);
	}

	/* Get the length of the text content */
	for (len = 0; text_content[len]; len++)
	{
		;
	}

	/* Write the text content to the file */
	wr_stat = write(new_file, text_content, len);
	if (wr_stat == -1)
	{
		close(new_file);
		return (-1);
	}

	/* Close the file */
	close(new_file);

	return (1);
}
