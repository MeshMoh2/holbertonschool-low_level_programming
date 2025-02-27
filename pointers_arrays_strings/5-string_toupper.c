#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: Pointer to the string.
 *
 * Description: This function iterates through the string and converts
 * lowercase letters (a-z) to uppercase (A-Z) using ASCII manipulation.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
