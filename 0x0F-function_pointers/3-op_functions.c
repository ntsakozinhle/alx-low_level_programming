#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function returns sum of a and b
 * @a: parameter for int 1
 * @b: parameter for int 2
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function returns dif of a and b
 * @a: parameter for int 1
 * @b: parameter for int 2
 * Return: a-b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function returns product of a and b
 * @a: parameter for int 1
 * @b: parameter for int 2
 * Return: a*b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function returns result of div of a and b
 * @a: parameter for int 1
 * @b: parameter for int 2
 * Return: a/b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function returns remainder of div of a and b
 * @a: parameter for int 1
 * @b: parameter for int 2
 * Return: a%b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
