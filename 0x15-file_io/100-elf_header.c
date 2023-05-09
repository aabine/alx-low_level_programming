#include "main.h"
#include <stdbool.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
    int fd;
    struct elf_header elf_header;
    bool error = false;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(97);
    }

    fd = open(argv[1], O_RDONLY);

    if (fd == -1)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        error = true;
    }

    if (!error && read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
    {
        fprintf(stderr, "Error: Can't read ELF header from file %s\n", argv[1]);
        error = true;
    }

    if (!error && elf_header.magic != 0x7F454C46)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        error = true;
    }

    if (error)
    {
        close(fd);
        exit(98);
    }

    printf("Magic: 0x%08x\n", elf_header.magic);
    printf("Class: 0x%02x\n", elf_header.class);
    printf("Data: 0x%02x\n", elf_header.data);
    printf("Version: 0x%02x\n", elf_header.version);
    printf("OS/ABI: 0x%02x\n", elf_header.osabi);
    printf("ABI Version: 0x%02x\n", elf_header.abiversion);
    printf("Type: 0x%02x\n", elf_header.type);
    printf("Entry point address: 0x%08x\n", elf_header.entry);

    close(fd);

    return (0);
}
