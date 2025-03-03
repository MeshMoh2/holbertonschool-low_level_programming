#include "main.h"

/**
 * _is_prime_helper - Checks if a number is prime recursively
 * @n: The number to check
 * @i: The current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (n <= 1) /* 0 and 1 are not prime numbers */
	{
		return (0);
	}
	if (i * i > n) /* No divisors found, so n is prime */
	{
		return (1);
	}
	if (n % i == 0) /* If n is divisible by i, it's not prime */
	{
		return (0);
	}
	return (_is_prime_helper(n, i + 1)); /* Check next divisor */
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1) /* Negative numbers, 0, and 1 are not prime */
	{
		return (0);
	}
	return (_is_prime_helper(n, 2)); /* Start checking from 2 */
}
