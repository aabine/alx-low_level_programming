#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-99 on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read;
	char buf[1024];

	/* Check if the number of arguments is correct. */
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open the source file for reading. */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Check if the destination file already exists. */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		fprintf(stderr, "Error: Can't create file %s\n", argv[2]);
		exit(99);
	}

	/* Read 1,024 bytes at a time from the source file and write them to the destination file. */
	while ((bytes_read = read(fd_from, buf, 1024)) > 0)
	{
		if (write(fd_to, buf, bytes_read) != bytes_read)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}

	/* Check for read error. */
	if (bytes_read == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Close the files. */
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		fprintf(stderr, "Error: Can't close files\n");
		exit(100);
	}

	return (0);
}
