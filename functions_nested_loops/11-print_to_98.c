#include "main.h"

#include "main.h"

/**
 * print_to_98 - Print numbers from n to 98.
 * @n: Starting number.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	print_number(n);
	_putchar('\n');
}

/**
 * print_number - Print an integer to the standard output
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

