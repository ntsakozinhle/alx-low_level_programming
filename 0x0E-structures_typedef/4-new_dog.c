#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new variable for strcut dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		new_dog->name = strdup(name);
		new_dog->age = age;
		new_dog->owner = strdup(owner);
	}
	return (new_dog);
}
