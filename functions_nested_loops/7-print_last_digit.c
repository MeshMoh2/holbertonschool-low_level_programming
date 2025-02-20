#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Description: This function takes an integer and prints its last digit.
 * If the number is negative, it still returns the positive last digit.
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10; /* Extract last digit */

	if (last_digit < 0) /* Convert to positive if negative */
		last_digit = -last_digit;

	_putchar(last_digit + '0'); /* Print the last digit */
	return (last_digit);
}
