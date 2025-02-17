#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error and returns 1.
 * The message is: "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 * followed by a new line.
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, "
			      "2015-10-19\n";

	write(2, message, 59); /* 59 is the length of the message including newline */

	return (1);
}
