#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the specified quote to standard error
 * without using printf or puts. It returns 1 as required.
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
	return (1);
}
