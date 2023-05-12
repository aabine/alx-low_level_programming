#ifndef MAIN_H
#define MAIN_H

/**
 * Author: Austine Abine
 * Description: Header file
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <stdbool.h>


#define BUFFER_SIZE 4096

struct elf_header_field {
    char *name;
    int size;
    unsigned char *data;
    struct elf_header_field *next;
};

struct elf_header {
    struct elf_header_field *magic;
    struct elf_header_field *class;
    struct elf_header_field *data;
    struct elf_header_field *version;
    struct elf_header_field *osabi;
    struct elf_header_field *abiversion;
    struct elf_header_field *pad;
    struct elf_header_field *type;
    struct elf_header_field *machine;
    struct elf_header_field *version2;
    struct elf_header_field *entry;
    struct elf_header_field *phoff;
    struct elf_header_field *shoff;
    struct elf_header_field *flags;
    struct elf_header_field *ehsize;
    struct elf_header_field *phentsize;
    struct elf_header_field *phnum;
    struct elf_header_field *shentsize;
    struct elf_header_field *shnum;
    struct elf_header_field *shstrndx;
};

void append_field(struct elf_header_field **head, char *name, int size, unsigned char *data);

void free_fields(struct elf_header_field *head);

bool read_elf_header(int fd, unsigned char *header);

bool is_elf_file(unsigned char *header);

void parse_elf_header(int fd, struct elf_header *elf_header);

void print_elf_header(struct elf_header elf_header);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t custom_strlen(const char *str);
void print_error(char *msg, char *file, int exit_code);

#endif
