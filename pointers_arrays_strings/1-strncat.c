#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to use from src.
 *
 * Description: This function appends at most `n` bytes from `src`
 * to `dest`, and `src` does not need to be null-terminated if
 * it contains `n` or more bytes. The resulting string in `dest`
 * is null-terminated.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Append src to dest using at most n bytes */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate the concatenated string */
	dest[i] = '\0';

	return (dest);
}
