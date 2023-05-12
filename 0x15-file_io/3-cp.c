#include "main.h"
#include <sys/stat.h>


/**
 * open_files - opens source and destination files
 * @src_file: the source file to read from
 * @dest_file: the destination file to write to
 *
 * Return: an array of file descriptors
 */
int *open_files(const char *src_file, const char *dest_file)
{
        int src_fd, dest_fd;
        int *fds = malloc(sizeof(int) * 10);

        src_fd = open(src_file, O_RDONLY);
        if (src_fd == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
                exit(98);
        }

        dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
        if (dest_fd == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
                close(src_fd);
                exit(99);
        }

        fds[0] = src_fd;
        fds[1] = dest_fd;

        return (fds);
}

/**
 * close_files - closes source and destination files
 * @fds: an array of file descriptors to close
 *
 * Return: void
 */
void close_files(int *fds)
{
        if (close(fds[0]) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds[0]);
                exit(100);
        }

        if (close(fds[1]) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds[1]);
                exit(100);
        }

        free(fds);
}

/**
 * copy_file - copies the content of one file to another file
 * @src_file: the source file to read from
 * @dest_file: the destination file to write to
 *
 * Return: void
 */
void copy_file(const char *src_file, const char *dest_file)
{
        int *fds, mode;
        ssize_t read_bytes, written_bytes;
        char buffer[1024];

        fds = open_files(src_file, dest_file);

        /*Open the destination file with the appropriate permissions*/
        mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
        if (fchmod(fds[1], mode) == -1) {
                dprintf(STDERR_FILENO, "Error: Can't set file permissions on %s\n", dest_file);
                exit(99);
        }

        while ((read_bytes = read(fds[0], buffer, 1024)) != 0)
        {
                if (read_bytes == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't read from %d\n", fds[0]);
                        exit(98);
                }

                written_bytes = write(fds[1], buffer, read_bytes);
                if (written_bytes == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fds[1]);
                        exit(99);
                }
        }

        close_files(fds);
}
/**
 * main - entry point for the program
 * @argc: the number of command line arguments
 * @argv: an array of command line arguments
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char **argv) 
{
        if (argc != 3)
        {
                printf("Usage: cp file_from file_to\n");
                exit(1);
        }

        copy_file(argv[1], argv[2]);

        return (0);
}
