#!/bin/bash
gcc -std=gnu89 main.c *.c -L. -lmy -o *.o | ar rc liball.a *.o
