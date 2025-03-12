#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: This function initializes the members of a
 * struct dog variable if the pointer is not NULL.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
