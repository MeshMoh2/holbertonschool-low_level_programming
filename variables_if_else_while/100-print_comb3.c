#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of two digits in ascending order, separated by ", ".
 * The two digits must be different, and the smallest combination is printed.
 * It only uses putchar and does not declare char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');

			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
tdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of two digits in ascending order, separated by ", ".
 * The two digits must be different, and the smallest combination is printed.
 * It only uses putchar and does not declare char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int digit1, digit2;

  for (digit1 = 0; digit1 < 9; digit1++)
    {
      for (digit2 = digit1 + 1; digit2 < 10; digit2++)
	{
	  putchar(digit1 + '0');
	  putchar(digit2 + '0');

	  if (digit1 != 8 || digit2 != 9)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }

  putchar('\n');

  return (0);
  
