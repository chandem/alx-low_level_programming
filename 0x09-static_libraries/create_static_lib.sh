#!/bin/bash
gcc -c -Wall -Wextra -Werror -pendatic *.c
ar -rc liball.a *.o
