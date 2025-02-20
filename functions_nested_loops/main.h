#ifndef MAIN_H
#define MAIN_H

#include <stdio.h> /* Standard library is allowed */

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 * Return: 1 on success, -1 on error
 */
int _putchar(char c);

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */
void print_alphabet_x10(void);

/**
 * _islower - Checks for lowercase character
 * @c: The character to check
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - Checks if a character is an alphabetic letter
 * @c: The character to check
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n);

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute
 * Return: The absolute value of n
 */
int _abs(int n);

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 * Return: The value of the last digit
 */
int print_last_digit(int n);

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */
void jack_bauer(void);

/**
 * times_table - Prints the 9 times table starting with 0
 */
void times_table(void);

/**
 * add - Adds two integers and returns the result
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */
int add(int a, int b);

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n);

#endif /* MAIN_H */
