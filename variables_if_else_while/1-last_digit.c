#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check to see if it is a number.
 * void: Null value
 *
 * Description: Print the number if it is positive, negative or a zero
 * Return: the zero value
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
