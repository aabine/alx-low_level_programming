#!/bin/bash
gcc -shared -fPIC *.c -o liball.so
chmod 755 liball.so