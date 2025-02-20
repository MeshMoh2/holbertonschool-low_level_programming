#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This function prints "_putchar"
 * followed by a new line, using the _putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; text[i] != '\0'; i++) /* Loop through characters */
	{
		_putchar(text[i]); /* Print character */
	}
	_putchar('\n'); /* Print newline */

	return (0);
}
