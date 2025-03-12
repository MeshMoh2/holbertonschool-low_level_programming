#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog_t struct
 * @d: Pointer to the dog_t struct to free
 *
 * Description: This function frees all memory allocated
 * for a dog_t struct, including name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
