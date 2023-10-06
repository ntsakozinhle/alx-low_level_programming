#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %#lu byte(s)\n", sizeof(float));
	return (0);
}
