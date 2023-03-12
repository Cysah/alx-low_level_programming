#!/bin/bash
gcc -Wall -Werror -pedantic -c *.c
ar rcs liball.a *.o
