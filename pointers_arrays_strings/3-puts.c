#include "main.h"

/**
 * _puts - Prints a string to stdout, followed by a new line.
 * @str: Pointer to the string.
 *
 * Description: Iterates through the string and prints each
 * character using _putchar. Ends with a newline character.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
