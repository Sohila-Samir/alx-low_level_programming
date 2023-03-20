#!/bin/bash
# @CFILE: is the c file that you want to be compiled and run after.
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 $CFILE && ./a.out