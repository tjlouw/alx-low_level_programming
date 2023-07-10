#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c -fno-PIC | ar -rc liball.a *.o
