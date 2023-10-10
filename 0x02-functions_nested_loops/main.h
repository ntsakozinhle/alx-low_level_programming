#include <stdio.h>
  
/**
 * main.h prototype file
 *
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
}
