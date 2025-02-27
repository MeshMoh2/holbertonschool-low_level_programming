#include "main.h"

/**
 * print_triangle - Prints a triangle using the character '#'.
 * @size: The size of the triangle.
 *
 * Description: If size is 0 or less, only a new line is printed.
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (space = size - i; space > 0; space--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
