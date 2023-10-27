#!/bin/bash
ar rc liball.a *.c | gcc -std=gnu89 main.c *.c liball.a -o -L. -lall
