#include "main.h"

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
		_putchar(i + '0');
	}

	_putchar('\n');

	return (0);
}
