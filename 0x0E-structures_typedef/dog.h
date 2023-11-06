#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for pet information
 * @name: name of pet
 * @age:age of pet
 * @owner: owner of pet
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
