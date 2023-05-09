Author: Austine Abine.
title: README
---
## Header File: main.h

### Functions
- `ssize_t read_textfile(const char *filename, size_t letters)`
- `int create_file(const char *filename, char *text_content)`
- `int append_text_to_file(const char *filename, char *text_content)`

### Description
This header file contains the declarations for three functions that can be used to read from, create, and append text to files. The functions are described below:

- `read_textfile`: Reads a specified number of letters from a text file and returns the number of letters read.
- `create_file`: Creates a new text file with the specified name and content, and returns 1 on success or -1 on failure.
- `append_text_to_file`: Appends text to an existing text file, or creates a new file if it does not exist, and returns 1 on success or -1 on failure.

### Usage
To use these functions in your project, include the `main.h` header file and call the functions with the appropriate arguments. For example:

```c
#include "main.h"

int main(void)
{
    ssize_t bytes_read = read_textfile("example.txt", 10);
    int create_stat = create_file("newfile.txt", "This is some text.");
    int append_stat = append_text_to_file("existing.txt", "This text will be appended.");

    return 0;
}
```
