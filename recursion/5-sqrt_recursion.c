#include "main.h"

/**
 * _sqrt_recursion - Calculate natural square root of number using recursion.
 * @n: The input number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	int root = _sqrt_recursion(n - 1);
	return (root * root) <= n) ? root : -1);
}

