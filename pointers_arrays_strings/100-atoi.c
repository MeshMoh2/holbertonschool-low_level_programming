#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 *
 * Description: Extracts numbers from the string, accounts for signs,
 * and converts the valid digits into an integer. If no numbers are found,
 * returns 0. Handles the case where -2147483648 would cause overflow.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');

			/* Prevent integer overflow */
			if (num > 2147483648)
				break;
		}
		else if (num > 0)
			break;

		i++;
	}

	/* Handle case of -2147483648 correctly */
	if (num == 2147483648 && sign == -1)
		return (-2147483648);

	return (num * sign);
}
