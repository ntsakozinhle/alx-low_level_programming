#!/bin/bash
ar rc liball.a *.c | gcc -std=gnu89 main.c -L. -lmy -o *.o
