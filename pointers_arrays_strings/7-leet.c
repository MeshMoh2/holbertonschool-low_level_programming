#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string to be modified.
 *
 * Description:
 * This function replaces specific letters in a string with corresponding
 * numeric values to create a "leet" encoding:
 * - 'a' and 'A' are replaced by '4'
 * - 'e' and 'E' are replaced by '3'
 * - 'o' and 'O' are replaced by '0'
 * - 't' and 'T' are replaced by '7'
 * - 'l' and 'L' are replaced by '1'
 *
 * The function modifies the input string directly and returns a pointer
 * to the modified string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j];
				break;
			}
		}
	}

	return (str);
}
