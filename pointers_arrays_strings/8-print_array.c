#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements to print.
 *
 * Description: Numbers are separated by a comma and a space,
 * and they are printed in the same order as stored in the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
