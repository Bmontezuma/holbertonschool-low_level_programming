#include "main.h"
#include <math.h>

/**
 * is_prime_number - Checks if a number is prime.
 *
 * @n: The number to check for primality.
 *
 * Return: 1 if the number is prime, 0 if it's not.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		i += 6;
	}

	return (1);
}
