#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 *
 * Description: This function swaps characters from the beginning
 * and end of the string until the middle is reached.
 */
void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
