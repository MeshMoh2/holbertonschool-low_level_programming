#include "main.h"

/**
 * _strcpy - Copies a string from src to dest, including the null byte.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Description: Copies the string pointed to by src, including
 * the terminating null byte ('\0'), to the buffer pointed to by dest.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0'; /* Ensure null termination */
	return (dest);
}
