#!/bin/bash
for file in *.c; do
	gcc -c -std=gnu89 "$file"
	done
ar rc liball.a *.o | ranlib liball.a | rm -f *.o
