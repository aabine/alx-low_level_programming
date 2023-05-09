#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, status = 0;
	char buf[1024];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
	return (98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		status = 99;
	fprintf(stderr, "Error: Can't create file %s\n", argv[2]);

	while ((bytes_read = read(fd_from, buf, 1024)) > 0)
	{
		if (write(fd_to, buf, bytes_read) != bytes_read)
		{
			status = 99;
			fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
		}
	}

	if (bytes_read == -1)
		status = 98;
	fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1 || close(fd_to) == -1)
		status = 100;
	fprintf(stderr, "Error: Can't close files\n");

	return (status);
}
