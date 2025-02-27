#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Description: This function compares two strings character by character.
 * It returns an integer difference of the first non-matching characters.
 * If s1 == s2, it returns 0. If s1 > s2, it returns a positive value.
 * If s1 < s2, it returns a negative value.
 *
 * Return: The difference between the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
