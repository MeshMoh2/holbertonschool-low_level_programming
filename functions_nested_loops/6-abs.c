#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute
 *
 * Description: This function returns the absolute value of an integer.
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
