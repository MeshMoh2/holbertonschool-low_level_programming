#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the string.
 *
 * Description: If the number of characters is odd, prints the last n
 * characters where n = (length_of_the_string + 1) / 2. Otherwise,
 * prints the second half.
 */
void puts_half(char *str)
{
	int length = 0, start, i;

	while (str[length] != '\0')
		length++;

	start = (length + 1) / 2;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
