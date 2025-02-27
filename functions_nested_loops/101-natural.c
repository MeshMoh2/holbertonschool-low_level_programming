#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Description: Iterates through numbers from 0 to 1023,
 * checks if they are divisible by 3 or 5, and adds them to the sum.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num, sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
