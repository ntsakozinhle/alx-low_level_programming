#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int y;
	
	y = _abs(-1);
	printf("%d\n", y);
	
	y = _abs(0);
	printf("%d\n", y);
	
	y = _abs(1);
	printf("%d\n", y);
	
	y = _abs(-98);
	printf("%d\n", y);
	
	return (0);
}
