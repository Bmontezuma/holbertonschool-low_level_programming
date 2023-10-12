#include "main.h"

/**
 * find_sqrt - Helper function to find the square root of a number.
 * @n: The input number.
 * @x: The current value to check.
 */

int find_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (find_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - Find the square root of a number.
 * @n: The input number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

