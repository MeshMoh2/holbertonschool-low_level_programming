#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16
 * in lowercase using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	/* Print digits 0-9 */
	for (num = '0'; num <= '9'; num++)
		putchar(num);

	/* Print letters a-f */
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	/* Print newline */
	putchar('\n');

	return (0);
}
