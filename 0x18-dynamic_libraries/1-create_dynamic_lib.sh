#!/bin/bash
gcc -shared -fPIC *.c -o 100-operations.so
chmod 755 100-operations.so
export LD_PRELOAD=100-operations.so