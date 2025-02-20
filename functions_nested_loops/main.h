#ifndef MAIN_H
#define MAIN_H

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

#endif /* MAIN_H */
