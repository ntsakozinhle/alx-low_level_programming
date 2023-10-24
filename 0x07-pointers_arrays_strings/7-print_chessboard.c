#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints a chessboard
 *
 * @a:
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0 ; b < 8; b++)
	{
		for (c = 0 ; c < 8 ; c++)
		{
			printf("%c ", a[b][c]);
		}
		printf("\n");
	}
}
