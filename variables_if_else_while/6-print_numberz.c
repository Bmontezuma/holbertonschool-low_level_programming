#include <stdio.h>

/**
 * main - Prints all single-digit numbers of base 10 followed by a newline.
 * Return: Always 0.
 */
int main(void)
{
	int i;

	/* "We have eternity to know your flesh." - Pinhead */

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}

