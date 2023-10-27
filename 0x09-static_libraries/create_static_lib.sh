#!/bin/bash
gcc -c -std=gnu89 *.c | ar rc liball.a *o | gcc -std=gnu89 main.c -o liball.a -L. -lall | rm *.o
