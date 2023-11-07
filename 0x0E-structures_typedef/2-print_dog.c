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
		printf("(nil)\n");
		return;
	}
	else
	{
		printf("Name: %p\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %p\n", d->owner);
	}
}
