#include "main.h"

/**
 * create_file - creates a file and write a string to it
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(char const *filename, char *text_content)
{
	int file_discription, len = 0;

	if (!filename)
		return (-1);

	file_discription = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_discription == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		if (write(file_discription, text_content, len) != len)
			return (-1);
	}

	close(file_discription);
	return (1);
}
