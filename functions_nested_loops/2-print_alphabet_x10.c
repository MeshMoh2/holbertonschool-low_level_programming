#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count < 10) /* Repeat 10 times */
	{
		letter = 'a';
		while (letter <= 'z') /* Print alphabet */
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n'); /* Print newline */
		count++;
	}
}
