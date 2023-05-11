#include "main.h"

/**
 * read_textfile - Reads a text file and writes its contents to standard output
 * @filename: Pointer to the name of the file to read
 * @max_chars: The maximum number of characters to read from the file
 *
 * Return: The number of characters read, or -1 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = 0;
	ssize_t number_of_characters_read = 0;
	char *character_buffer = 0;

	file_descriptor = open(filename, O_RDWR);
	if (file_descriptor == -1)
	{
		return 0;
	}

	character_buffer = malloc(sizeof(char) * letters);
	if (!character_buffer)
	{
		return 0;
	}

	number_of_characters_read = read(file_descriptor, character_buffer, letters);
	if (number_of_characters_read == -1)
	{
		free(character_buffer);
		close(file_descriptor);
		return 0;
	}

	write(STDOUT_FILENO, character_buffer, number_of_characters_read);

	free(character_buffer);
	close(file_descriptor);

	return number_of_characters_read;
}
