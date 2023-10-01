#include "main.h"
#include <stdio.h>
/**
 * print_more_numbers - Prints numbers from 0 to 14 ten times.
 */
void print_more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				putchar((j / 10) + '0');
			}
			putchar((j % 10) + '0');
		}
		putchar('\n');
	}
}

