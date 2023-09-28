#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers 0-9 (not 2-4) followed by new line.
 */
void print_most_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		if (digit != '2' && digit != '4')
		{
			putchar(digit);
		}
		digit++;
	}

	putchar('\n');
}

