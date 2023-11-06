#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints struct dog
 * @d: pointer for strcuture
 * Return: void
 */

void print_dog(struct dog *d) 
{

	if (d == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
