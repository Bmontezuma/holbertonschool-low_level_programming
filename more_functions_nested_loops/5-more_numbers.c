#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Prints numbers 0-14 repeated 10 times, followed by new line.
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				putchar(num / 10 + '0');
			}
			putchar(num % 10 + '0');
		}
		putchar('\n');
	}
}

