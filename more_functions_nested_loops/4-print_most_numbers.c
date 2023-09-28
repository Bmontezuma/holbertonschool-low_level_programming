#include "main.h"

/**
 * print_most_numbers - Prints numbers 0-9 (not 2 and 4) followed by new line.
 */
void print_most_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		if (digit != '2' && digit != '4')
		{

	  _putchar(digit);
		}
		digit++;
	}

	_putchar('\n');
}
