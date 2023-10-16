#include "main.h"

/**
 * find_sqrt - Helper function to find the square root of a number.
 * @n: The input number.
 * @x: The current value to check.
 *
 * Return: The square root of 'n' if found, or -1 if not.
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
 *
 * Return: The square root of 'n' if found, or -1 if not.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
