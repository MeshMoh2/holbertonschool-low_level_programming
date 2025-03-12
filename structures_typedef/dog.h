#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - Defines a dog's attributes
 * @name: Dog's name (string)
 * @age: Dog's age (float)
 * @owner: Dog's owner (string)
 *
 * Description: Structure to store information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Typedef for struct dog */
typedef struct dog dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
