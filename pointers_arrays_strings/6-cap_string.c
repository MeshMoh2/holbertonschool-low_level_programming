#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 *
 * Description: Capitalizes the first letter of each word in the string.
 * Word separators: space, tab, new line, ',', ';', '.', '!', '?', '"',
 * '(', ')', '{', and '}'.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;
	char separators[] = " \t\n,;.!?\"(){}";
	int j;

	while (str[i] != '\0')
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		capitalize = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize = 1;
				break;
			}
		}

		i++;
	}

	return (str);
}
