#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the exact message:
 * "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error output.
 *
 * - It does not use printf or puts.
 * - It uses the write system call to output the string.
 * - The program returns 1 as required by the project specifications.
 *
 * Return: Always 1 (indicating an error for testing purposes)
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
	return (1);
}
