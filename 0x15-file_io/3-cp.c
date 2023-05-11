#include "main.h"

/**
 * copy_file - copies a file
 * @src_file: source file
 * @dest_file: destination file
 *
 * Return: 0 on success, 98-100 on failure
 */

int copy_file(const char *src_file, const char *dest_file)
{
	char buf[BUFFER_SIZE];
	int src_fd, dest_fd;
	ssize_t nread, nwritten;

	src_fd = open(src_file, O_RDONLY);

	if (src_fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", src_file);
		return (1);
	}

	dest_fd = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (dest_fd == -1)
	{
		fprintf(stderr, "Error: Can't create file %s\n", dest_file);
		close(src_fd);
		return (1);
	}

	while ((nread = read(src_fd, buf, sizeof(buf))) > 0)
	{
		nwritten = sendfile(dest_fd, src_fd, NULL, nread);
		if (nwritten == -1)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", dest_file);
			close(src_fd);
			close(dest_fd);
			return (1);
		}
	}

	close(src_fd);
	close(dest_fd);
	return (0);
}

/**
 * main - copies a file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98-100 on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (1);
	}

	return (copy_file(argv[1], argv[2]));
}
