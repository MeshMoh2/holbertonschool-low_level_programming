#include "main.h"

/**
 * _sqrt_helper - Helper function to find the natural square root of a number
 * @n: The number whose square root is to be found
 * @i: The current divisor to check
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n) /* If square exceeds n, no natural square root */
	{
		return (-1);
	}
	if (i * i == n) /* Found the natural square root */
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1)); /* Recursively check the next number */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number whose square root is to be found
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Negative numbers do not have natural square roots */
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0)); /* Start recursion from 0 */
}
