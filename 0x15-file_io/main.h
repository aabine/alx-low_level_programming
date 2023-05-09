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

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t custom_strlen(const char *str);

#endif
