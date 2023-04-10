#!/bin/bash

# Compile C source files and create library archive
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcs liball.a *.o

# Verify library archive
if ! ar t liball.a >/dev/null; then
    echo "Error: failed to verify library archive liball.a" >&2
    exit 1
fi

echo "Library archive liball.a created successfully"
