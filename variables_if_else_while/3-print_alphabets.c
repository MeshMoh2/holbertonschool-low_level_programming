#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by uppercase, using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase letters */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	/* Print uppercase letters */
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	/* Print newline */
	putchar('\n');

	return (0);
}
