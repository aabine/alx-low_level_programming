#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-100 on failure
 */
struct elf_header {
	unsigned int magic;
	unsigned char class;
	unsigned char data;
	unsigned char version;
	unsigned char osabi;
	unsigned char abiversion;
	unsigned char pad[7];
	unsigned short type;
	unsigned short machine;
	unsigned int version2;
	unsigned int entry;
	unsigned int phoff;
	unsigned int shoff;
	unsigned int flags;
	unsigned short ehsize;
	unsigned short phentsize;
	unsigned short phnum;
	unsigned short shentsize;
	unsigned short shnum;
	unsigned short shstrndx;
};

int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2) {
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	struct elf_header elf_header;
	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
		fprintf(stderr, "Error: Can't read ELF header from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (elf_header.magic != 0x7F454C46) {
		fprintf(stderr, "Error: Not an ELF file\n");
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
