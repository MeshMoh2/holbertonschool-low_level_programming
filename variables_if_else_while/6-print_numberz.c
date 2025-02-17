#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers
 * of base 10 starting from 0, followed by a new line.
 * It uses only putchar and does not declare char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	putchar('\n');

	return (0);
}
