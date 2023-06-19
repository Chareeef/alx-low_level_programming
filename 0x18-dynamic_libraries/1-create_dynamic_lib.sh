#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
gcc -shared -Wl,-soname,liball.so *.o -o liball.so
