#include "main.h"

int main(int argc, char *argv[])
{
	int fd;
	unsigned char header[52];
	struct elf_header elf_header = {0};
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	if (!read_elf_header(fd, header))
	{
		fprintf(stderr, "Error: Can't read ELF header from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (!is_elf_file(header))
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}

	parse_elf_header(fd, &elf_header);
	print_elf_header(elf_header);
	free_fields(elf_header.magic);
	free_fields(elf_header.class);
	free_fields(elf_header.data);
	free_fields(elf_header.version);
	free_fields(elf_header.osabi);
	free_fields(elf_header.abiversion);
	free_fields(elf_header.pad);
	free_fields(elf_header.type);
	free_fields(elf_header.machine);
	free_fields(elf_header.version2);
	free_fields(elf_header.entry);
	free_fields(elf_header.phoff);
	free_fields(elf_header.shoff);
	free_fields(elf_header.flags);
	free_fields(elf_header.ehsize);
	free_fields(elf_header.phentsize);
	free_fields(elf_header.phnum);
	free_fields(elf_header.shentsize);
	free_fields(elf_header.shnum);
	free_fields(elf_header.shstrndx);

	close(fd);

	return (0);
}

void append_field(struct elf_header_field **head, char *name, int size, unsigned char *data)
{
	struct elf_header_field *new_field = (struct elf_header_field *)malloc(sizeof(struct elf_header_field));
	new_field->name = name;
	new_field->size = size;
	new_field->data = data;
	new_field->next = NULL;

	if (*head == NULL)
	{
		*head = new_field;
	}
	else
	{
		struct elf_header_field *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_field;
	}
}

void free_fields(struct elf_header_field *head)
{
	while (head != NULL)
	{
		struct elf_header_field *current = head;
		head = head->next;
		free(current->data);
		free(current);
	}
}

bool read_elf_header(int fd, unsigned char *header)
{
	if (read(fd, header, sizeof(unsigned char) * 52) != sizeof(unsigned char) * 52)
	{
		return false;
	}
	return true;
}

bool is_elf_file(unsigned char *header)
{
	if (header[0] == 0x7f && header[1] == 'E' && header[2] == 'L' && header[3] == 'F')
	{
		return true;
	}
	return false;
}

void parse_elf_header(int fd, struct elf_header *elf_header)
{
	unsigned char header[52];
	read_elf_header(fd, header);

	append_field(&elf_header->magic, "Magic", 4, &header[0]);
	append_field(&elf_header->class, "Class", 1, &header[4]);
	append_field(&elf_header->data, "Data", 1, &header[5]);
	append_field(&elf_header->version, "Version", 1, &header[6]);
	append_field(&elf_header->osabi, "OS/ABI", 1, &header[7]);
	append_field(&elf_header->abiversion, "ABI Version", 1, &header[8]);
	append_field(&elf_header->pad, "Padding", 7, &header[9]);
	append_field(&elf_header->type, "Type", 2, &header[16]);
	append_field(&elf_header->machine, "Machine", 2, &header[18]);
	append_field(&elf_header->version2, "Version2", 4, &header[20]);
	append_field(&elf_header->entry, "Entry point address", 4, &header[24]);
	append_field(&elf_header->phoff, "Program header table offset", 4, &header[28]);
	append_field(&elf_header->shoff, "Section header table offset", 4, &header[32]);
	append_field(&elf_header->flags, "Flags", 4, &header[36]);
	append_field(&elf_header->ehsize, "ELF header size", 2, &header[40]);
	append_field(&elf_header->phentsize, "Program header table entry size", 2, &header[42]);
	append_field(&elf_header->phnum, "Program header table entry count", 2, &header[44]);
	append_field(&elf_header->shentsize, "Section header table entry size", 2, &header[46]);
	append_field(&elf_header->shnum, "Section header table entry count", 2, &header[48]);
	append_field(&elf_header->shstrndx, "Section header string table index", 2, &header[50]);
}

void print_elf_header(struct elf_header elf_header)
{
	int i;
	struct elf_header_field *current;

	printf("ELF header:\n");
	printf("===========\n");

	current = elf_header.magic;
	while (current != NULL)
	{
		printf("%s: ", current->name);
		for (i = 0; i < current->size; i++)
		{
			printf("%02x ", (int)current->data[i]);
		}
		printf("\n");
		current = current->next;
	}
}
