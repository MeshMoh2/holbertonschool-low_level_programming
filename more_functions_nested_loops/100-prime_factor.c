#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Description: The program divides the number by the smallest prime factors
 * until it reaches the largest prime factor, then prints it.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long largest = 0;

	while (num > 1)
	{
		while (num % factor == 0)
		{
			largest = factor;
			num /= factor;
		}
		factor++;
	}

	printf("%ld\n", largest);
	return (0);
}
