#include "main.h"
#include <errno.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-100 on failure
 */
#include "main.h"

int copy_file(char *src_file, char *dest_file);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        return 97;
    }
    int status = copy_file(argv[1], argv[2]);
    return status;
}

/**
 * copy_file - copies a file
 * @src_file: source file
 * @dest_file: destination file
 * Return: 0 on success, 98-100 on failure
*/

int copy_file(char *src_file, char *dest_file) {
    int src_fd = open(src_file, O_RDONLY);
    if (src_fd < 0) {
        fprintf(stderr, "Error: Can't read from file %s\n", src_file);
        return 98;
    }
    int dest_fd = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (dest_fd < 0) {
        fprintf(stderr, "Error: Can't create file %s\n", dest_file);
        return 99;
    }
    char buf[4096];
    ssize_t nread;
    while ((nread = read(src_fd, buf, sizeof buf)) > 0) {
        char *out_ptr = buf;
        ssize_t nwritten;
        do {
            nwritten = write(dest_fd, out_ptr, nread);
            if (nwritten >= 0) {
                nread -= nwritten;
                out_ptr += nwritten;
            } else if (errno != EINTR) {
                fprintf(stderr, "Error: Can't write to file %s\n", dest_file);
                return 99;
            }
        } while (nread > 0);
    }
    if (nread == -1) {
        fprintf(stderr, "Error: Can't read from file %s\n", src_file);
        return 98;
    }
    if (close(src_fd) == -1 || close(dest_fd) == -1) {
        fprintf(stderr, "Error: Can't close files\n");
        return 100;
    }
    return 0;
}
