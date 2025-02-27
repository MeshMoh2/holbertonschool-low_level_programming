#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy.
 *
 * Description: Copies at most `n` bytes of `src` into `dest`.
 * If `src` is shorter than `n`, `dest` is padded with null bytes.
 * If `src` is longer than `n`, `dest` will not be null-terminated.
 *
 * Return: Pointer to the destination string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy src into dest up to n bytes */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* If src is shorter than n, pad dest with '\0' */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
