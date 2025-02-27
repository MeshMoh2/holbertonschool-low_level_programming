#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Description: This function appends the `src` string to the `dest` string,
 * overwriting the terminating null byte (`\0`) at the end of `dest`,
 * and then adds a new terminating null byte.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Append src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate the concatenated string */
	dest[i] = '\0';

	return (dest);
}
