#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Computes the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s && s[len])
		len++;
	return (len);
}

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to include from s2.
 *
 * Return: Pointer to the newly allocated memory space containing s1,
 * followed by the first n bytes of s2, and null terminated.
 * If the function fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';
	return (concat);
}
