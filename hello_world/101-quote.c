#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This program prints a specific quote to standard error
 * without using printf or puts, and returns 1.
 * without using printf or puts.
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
