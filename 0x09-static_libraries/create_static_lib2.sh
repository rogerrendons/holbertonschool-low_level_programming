#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rc holberton.a *.o
