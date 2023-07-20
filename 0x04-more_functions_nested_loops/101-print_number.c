#include "main.h"

/**
 * print_integer - A function to print an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_integer(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n; // Make n positive for further processing
	}

	int divisor = 1000000000;
	int leading_zero = 1; // To skip leading zeros

	while (divisor >= 1)
	{
		int digit = n / divisor;
		n %= divisor;
		divisor /= 10;

		if (digit != 0 || !leading_zero)
		{
			_putchar(digit + '0');
			leading_zero = 0;
		}
	}
}

