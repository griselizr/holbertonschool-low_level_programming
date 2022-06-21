#!/bin/bash
gcc -Wall -Werror -Wextra -c *.c
ar -t liball.a
ranlib liball.a
