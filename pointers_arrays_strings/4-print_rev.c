#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string.
 *
 * Description: First, calculates the length of the string.
 * Then, iterates backwards to print each character.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}

	_putchar('\n');
}
