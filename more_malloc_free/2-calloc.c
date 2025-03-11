#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc and initializes to zero.
 * @nmemb: The number of elements.
 * @size: The size in bytes of each element.
 *
 * Return: Pointer to allocated memory.
 * If allocation fails or if nmemb or size is 0, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
