#ifndef DOG_H
#define DOG_H
#define DOG_H
#define my_dog dog_t

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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
