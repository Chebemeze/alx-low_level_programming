#!/bin/bash
gcc -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
