/**
 * factorial - Calculate the factorial of a given number.
 * @n: The input number.
 *
 * Return: The factorial of n, or -1 for negative input.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	return ((n <= 1) ? 1 : (n * factorial(n - 1)));
}

