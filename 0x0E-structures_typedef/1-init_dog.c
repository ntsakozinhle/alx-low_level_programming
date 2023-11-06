#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initializes a struct dog
 * @d: parameter for struct dog
 * @name: pet name
 * @age: pet age
 * @owner: owner name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
